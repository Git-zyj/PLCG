/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1354
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
    var_13 = (-(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (var_11))) * (var_3))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) 987961606)) | (2257083985U)))))) ? (var_6) : (((((/* implicit */_Bool) min((2918180735U), (var_3)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -827080498)) > (1679300281U)))))))));
    var_15 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) (-(-1158836038)))) : (min((((/* implicit */unsigned int) 663821749)), (var_3)))))) ? (var_9) : (((/* implicit */unsigned int) var_12)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) var_3);
                            var_17 = min((1376786564U), (((((/* implicit */_Bool) ((int) arr_7 [i_0] [i_1] [i_1]))) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2 + 1])) : (var_3))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (max((((((/* implicit */_Bool) -1344799687)) ? (((((/* implicit */unsigned int) 1479465819)) * (844855466U))) : (((arr_8 [16] [i_1] [i_0] [16]) / (arr_12 [i_0 + 1] [i_1] [i_1] [i_1]))))), (((((((/* implicit */_Bool) 1376786585U)) ? (((/* implicit */unsigned int) arr_7 [i_0 - 1] [22] [i_4])) : (arr_12 [i_0] [i_1] [i_4] [i_4]))) * (((/* implicit */unsigned int) arr_0 [i_0 - 1]))))))));
                    var_20 ^= ((2257083985U) * (2918180725U));
                    arr_14 [i_1] = ((/* implicit */int) (((-((-(var_11))))) < (min((((unsigned int) var_5)), ((+(1376786574U)))))));
                    var_21 = -296882239;
                }
                for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_19 [i_1] [i_0 - 1] [i_1] [i_5] = ((unsigned int) -2147483642);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            {
                                arr_24 [i_1] = ((/* implicit */int) 1679300281U);
                                arr_25 [i_0] [7] [i_1] [i_5] [i_6] [i_7 + 1] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (2257083985U) : (((/* implicit */unsigned int) -1073741824)))))) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (((((/* implicit */unsigned int) -1344799687)) & (((((/* implicit */unsigned int) 2147483647)) & (4017054511U))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0 - 1] [i_1] [i_5] = ((/* implicit */unsigned int) 674760910);
                }
            }
        } 
    } 
    var_22 ^= ((/* implicit */int) var_3);
}
