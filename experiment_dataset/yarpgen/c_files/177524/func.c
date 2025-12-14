/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177524
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_3 [i_0]);
                    arr_9 [i_0] [8] [i_2] = ((/* implicit */_Bool) (unsigned short)6882);
                    arr_10 [i_1] [i_0] = ((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */short) ((signed char) ((unsigned int) var_0))))));
                    var_15 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_16 &= ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_3] [i_3])), (((((/* implicit */int) arr_1 [i_3] [i_3])) * (((/* implicit */int) var_7))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((arr_13 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_3]), (arr_2 [i_3]))))))))));
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_14 [i_3]) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))))) ? (((((/* implicit */int) arr_12 [3ULL])) * (((/* implicit */int) (unsigned short)27645)))) : (((/* implicit */int) min((arr_14 [i_3]), ((_Bool)1)))))) >= (((/* implicit */int) ((_Bool) arr_0 [i_3] [i_3])))));
        var_19 = ((/* implicit */int) min(((+(min((arr_5 [i_3] [i_3]), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)55162))), (min(((unsigned short)994), (arr_1 [i_3] [i_3]))))))));
    }
    for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        arr_19 [i_4 - 3] [(_Bool)1] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4 + 3] [i_4] [i_4])))));
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 15; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    arr_26 [i_4 - 2] [i_5 - 4] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((arr_25 [i_4 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (14589629313660297760ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 3173967398U)) ^ (arr_7 [(_Bool)1] [i_5 + 1] [i_5 + 1] [4ULL]))))))))));
                    arr_27 [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        arr_28 [i_4] = ((unsigned int) ((((/* implicit */_Bool) 2857196130U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [2ULL]))) : ((~(3584U)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 13; i_9 += 1) 
            {
                {
                    arr_38 [i_9] [i_8] [i_7] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_9] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (arr_21 [i_9] [i_9 - 2] [i_9 + 1])))) * (824633720832ULL));
                    arr_39 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)16))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9] [i_8]))) / (arr_17 [i_9]))))), ((~(((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9])))))))));
                    var_20 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_7] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_7]))) : (min((min((var_1), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_7])), (arr_8 [i_7] [i_8] [i_7])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))), ((!(((/* implicit */_Bool) var_7))))))));
    var_22 = ((/* implicit */signed char) min((((-667004287) ^ (((/* implicit */int) ((-3) >= (((/* implicit */int) (signed char)-37))))))), (((/* implicit */int) var_13))));
}
