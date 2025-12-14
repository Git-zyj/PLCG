/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165216
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 7740982409039718053ULL))))) - (((/* implicit */int) (unsigned char)211))));
                    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))) : (arr_1 [i_0 + 2] [i_0 + 3])));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_12 += ((/* implicit */_Bool) ((((((/* implicit */long long int) 1855231768)) != (7793301511477688294LL))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) (unsigned short)65523))))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) arr_3 [(unsigned short)2])))) > ((+(((/* implicit */int) (unsigned char)242)))))))));
                    var_13 += ((/* implicit */unsigned short) max(((+((-(arr_2 [i_1 - 1]))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_2 [i_1])))) && (((((/* implicit */int) (signed char)8)) == (((/* implicit */int) arr_11 [i_0] [i_1])))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_8))));
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) max((var_2), (var_8)))), ((~(4087829948U))))) << (((((/* implicit */_Bool) 2012003235U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4087829928U)))));
                        var_16 = ((/* implicit */unsigned char) arr_2 [i_1 - 1]);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1 - 1] [i_3] [i_4] [i_5 - 1] = max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((unsigned int) 207137348U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) (unsigned char)204)) : (((((/* implicit */int) arr_11 [i_0 + 2] [i_0])) >> (((((/* implicit */int) arr_15 [i_3] [i_0] [i_5 - 1])) + (30856))))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            arr_22 [i_0] = arr_8 [i_0] [i_6 + 1];
                            arr_23 [i_0] [i_0] = ((/* implicit */int) arr_18 [i_0] [i_4] [6LL] [i_1] [i_0]);
                        }
                        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_3] [i_0] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_20 [i_0 + 2] [i_0] [i_0] [i_0] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) ^ (1077002344))) ^ (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)129))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_4))));
                        }
                    }
                    arr_27 [i_1] &= ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)65527))))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_20 += ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-1))))));
                    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)21257))));
                    var_22 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((arr_20 [i_0] [i_1] [i_8] [i_8] [i_8]) | (((/* implicit */unsigned int) var_0)))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (arr_19 [(_Bool)1] [i_1 - 1] [i_8 + 1] [i_1] [i_8] [(_Bool)1] [i_0]))))))), ((~(max((9223372036854775807LL), (((/* implicit */long long int) var_2))))))));
                }
                var_23 += ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_24 ^= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(var_0)))) : (max((var_1), (((/* implicit */unsigned int) var_0)))))) / (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3))))), (((((/* implicit */int) (unsigned short)21257)) >> (((var_0) + (2135559437))))))))));
    var_25 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))), ((+((+(((/* implicit */int) (unsigned short)21257))))))));
}
