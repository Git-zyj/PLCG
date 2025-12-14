/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105683
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1]))));
        var_12 -= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (4278314992601364975LL) : (8727373545472LL)));
    }
    var_14 += ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32520)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned short)12753))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_10 [11] [i_1] [i_1])) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40872))) | (3751585550109977415ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned int) arr_9 [i_5] [i_2]);
                                var_18 = ((/* implicit */signed char) (~(min((arr_8 [i_4]), (arr_8 [i_1])))));
                                var_19 -= ((/* implicit */unsigned int) ((((arr_6 [i_1]) > (((arr_12 [i_1] [i_1] [i_4] [i_4]) | (8254046406695272076LL))))) ? ((~(((((/* implicit */_Bool) var_9)) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35654))))))) : (((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) : (929696855U))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_11 [i_1] [(signed char)14] [i_1])))) ? (max((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_3] [i_2] [i_1]))) : (min((arr_11 [i_1] [i_1] [i_3]), (arr_11 [i_3] [i_3] [i_3])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                arr_20 [i_6] [i_7] = ((/* implicit */unsigned char) arr_19 [i_6]);
                var_21 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) % ((~(11779808508098459252ULL))))), (((/* implicit */unsigned long long int) arr_16 [i_6] [i_6]))));
            }
        } 
    } 
}
