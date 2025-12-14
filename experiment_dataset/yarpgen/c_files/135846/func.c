/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135846
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((_Bool) (-(((/* implicit */int) var_11)))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1801075974228798972LL))))), (((unsigned char) (unsigned char)14))))) || (var_0)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((long long int) (_Bool)1)) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -2015385902)))))))))));
                        arr_11 [i_0] [(unsigned char)18] [i_2 + 1] [i_2 + 1] [i_2 + 1] [18ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)220)) || ((_Bool)1)));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_15 *= ((/* implicit */_Bool) 11860539191476647888ULL);
                            arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)214)) && ((_Bool)1)));
                            var_16 ^= ((/* implicit */_Bool) ((arr_4 [0] [i_3] [i_2 - 2] [i_0 + 1]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [(unsigned char)11] [i_3] [i_4] = ((/* implicit */unsigned char) 0);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [2ULL] [22] [i_5])) || (((/* implicit */_Bool) arr_7 [20ULL] [i_0 - 2] [i_0]))))))));
                            var_18 &= ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2 - 2]);
                            arr_18 [i_0] [i_3] [i_0 - 1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -896457842)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)254))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((arr_4 [i_0 - 1] [i_2 - 1] [i_6 - 1] [i_0 - 1]) - (arr_4 [i_0 - 1] [i_2 + 2] [i_6 - 1] [(_Bool)1])));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (arr_7 [i_0] [i_0] [i_3]))) : (((/* implicit */int) var_4)))))));
                            arr_21 [9] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 4] [(unsigned char)1] [i_6 - 1] [i_2 + 2])) ? (arr_4 [i_0] [i_3] [i_6 - 1] [i_2 + 2]) : (arr_4 [i_0 - 2] [i_1] [i_6 - 1] [i_2 + 2])));
                            var_22 = ((/* implicit */_Bool) arr_16 [i_0]);
                        }
                        var_23 += ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_3])) || ((_Bool)1));
                    }
                    var_24 = ((((((/* implicit */_Bool) 6003616857432260133ULL)) ? (((unsigned long long int) (unsigned char)241)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)131))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_27 [(unsigned char)22] [i_1] [i_2] [i_7] [i_1] &= ((/* implicit */unsigned long long int) (~(1297231554354196798LL)));
                                arr_28 [6] [6] [i_0] [3ULL] [3ULL] [3ULL] [6] = ((/* implicit */int) ((arr_23 [8ULL] [i_7 + 1] [8ULL] [i_1]) ? ((((((_Bool)1) ? (((/* implicit */unsigned long long int) 399622885298298682LL)) : (2345767557303359806ULL))) | (min((((/* implicit */unsigned long long int) (unsigned char)241)), (5676163304921285070ULL))))) : (((/* implicit */unsigned long long int) (~(arr_4 [i_0 - 1] [i_2 - 2] [9] [i_0 - 1]))))));
                                var_25 = ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) var_11)));
                                arr_29 [i_0 - 3] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [(unsigned char)11] [21] [(unsigned char)14] [i_0 - 3] [0] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)127))))) | (((long long int) 503316480)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_2 - 1] [i_0 - 1])), (var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
