/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160740
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
    var_11 = min((948210029), (((((/* implicit */int) min(((unsigned char)157), (var_1)))) + (((/* implicit */int) max(((unsigned char)167), ((unsigned char)150)))))));
    var_12 = ((/* implicit */unsigned char) (((((((-(((/* implicit */int) var_0)))) + (2147483647))) >> (((((/* implicit */int) var_4)) - (73))))) | (((((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)203)))) >> (min((2147483647), (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((((/* implicit */int) ((unsigned char) ((int) arr_3 [i_0 - 2])))) >> (((((((((arr_2 [(unsigned char)5]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(arr_3 [i_0])))))) - (1868806900017698762LL))));
                var_14 = ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)119), (((/* implicit */unsigned char) ((203575708) < (509104789))))))) > (((/* implicit */int) ((524287) > (((/* implicit */int) (unsigned char)203)))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_6 [i_0 - 1] [(unsigned char)16] [(_Bool)1] = ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) arr_3 [i_1])))))))) ^ (arr_1 [(_Bool)1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) 379656852);
                                arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1];
                                var_16 = ((/* implicit */int) min((((/* implicit */long long int) ((-1) ^ (((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) > (-4))))))), (arr_2 [i_3])));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_11 [i_0] [2] [i_0] [i_0] [6]) >> ((((-(-1045187755))) - (1045187751)))))) < (((-1LL) - (((/* implicit */long long int) 334391917))))));
                    var_18 = (+(((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_7 [i_0] [13] [i_0 - 2] [i_0 - 1] [17] [i_0]))) - (-1306184923))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    arr_17 [i_0] [i_1] [21] = 379656865;
                    var_19 = arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0];
                    var_20 = ((/* implicit */_Bool) (+((-(1933330835)))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_7] [i_1] = ((/* implicit */long long int) ((arr_10 [i_0] [18LL] [i_5] [0] [i_7 + 3]) ^ (((/* implicit */int) arr_4 [1] [9] [i_5] [i_5]))));
                                arr_23 [i_0] [i_7] [i_0 - 3] [(unsigned char)16] [(unsigned char)16] [i_0] = ((/* implicit */long long int) (-(((-334391917) | (arr_0 [i_1])))));
                                arr_24 [i_0 - 1] [i_7] = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_5] [i_5 + 3] [i_5] [16] [i_7 - 2]);
                                arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [(unsigned char)14] = ((/* implicit */int) (unsigned char)119);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((((int) 1602571780)) ^ (var_10));
}
