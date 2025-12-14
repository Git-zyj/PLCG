/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131946
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56322)) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18778)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) * (((((/* implicit */int) arr_6 [i_0])) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_3))) - (58962U)))))));
                var_19 = (unsigned short)26077;
                arr_7 [(unsigned short)12] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)9238)) + (((/* implicit */int) (unsigned char)255))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 9; i_2 += 3) 
    {
        for (unsigned int i_3 = 4; i_3 < 7; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) arr_11 [3U] [i_3]);
                var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3049135479U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((15869794144205481365ULL) >> (((16383U) - (16335U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (arr_9 [(unsigned char)4] [i_3 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) 8586316180014312450ULL);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_3 - 1]))) || (((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_8 [2ULL]))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) 3803831064676605496LL)), (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_5))));
                }
                for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 7; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_15 [i_8]), (((/* implicit */unsigned short) (unsigned char)220))))), (((arr_17 [i_2] [i_3] [i_3 - 2] [i_7] [i_8] [(_Bool)1]) / (3853252117834907095LL)))))) ? (((/* implicit */int) max(((unsigned short)9228), (((/* implicit */unsigned short) (signed char)-111))))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_22 [i_2] [i_7] [i_8] [5U])) / (((/* implicit */int) arr_12 [i_2])))))))))));
                                arr_27 [i_8 + 2] [i_8 + 2] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8 + 2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_14 [i_8 + 1] [i_2 - 2])))) ? (((/* implicit */int) arr_12 [i_2 - 1])) : (((/* implicit */int) ((unsigned char) (signed char)0)))));
                                var_28 |= ((/* implicit */unsigned short) ((unsigned int) max((arr_0 [i_2 - 1]), (((/* implicit */long long int) var_5)))));
                            }
                        } 
                    } 
                    var_29 = ((unsigned short) (+(((/* implicit */int) arr_13 [i_2 - 1] [(unsigned short)4] [i_2] [i_2]))));
                    var_30 *= ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) var_7)), (arr_14 [i_3 - 2] [i_3]))));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (~(((/* implicit */int) var_1)))))));
                }
                var_32 |= ((/* implicit */unsigned char) arr_17 [i_3] [i_3 + 2] [i_3 - 1] [(unsigned char)1] [(signed char)1] [(unsigned short)8]);
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) arr_2 [i_2])), (arr_17 [(unsigned short)8] [i_2] [i_2] [8LL] [(unsigned short)9] [6U]))))))))));
            }
        } 
    } 
}
