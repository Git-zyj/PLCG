/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188557
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
    var_20 = ((/* implicit */unsigned char) var_13);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((int) max((((/* implicit */long long int) (+(-472004512)))), (var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1 + 3] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_2))), ((~(472004509)))))) : (((((/* implicit */_Bool) min((2121145750), (arr_3 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_12)))) : ((~(0LL)))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) arr_2 [i_0] [(unsigned char)15]);
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2121145750)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) + (max((((/* implicit */int) (_Bool)1)), (-2121145751)))))) ? (min((((/* implicit */int) max((arr_4 [i_0]), (arr_0 [i_1])))), (max((2121145750), (((/* implicit */int) arr_4 [i_0])))))) : ((~(-472004512)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(arr_2 [i_3] [i_3])))))) || (((/* implicit */_Bool) min((((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) : (var_11))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (((~(((/* implicit */int) (unsigned char)183)))) <= (((-2121145773) & (((/* implicit */int) (_Bool)1)))))))));
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2 + 1] [i_3]))) / (((((/* implicit */_Bool) -530019897)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_8 [i_1] [i_1] [i_3]))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 6798599981487495686LL)) ? (896LL) : (((/* implicit */long long int) 2147483647)))))));
                            arr_15 [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_18), (6798599981487495690LL)))) ? (((((/* implicit */int) var_13)) - ((~(((/* implicit */int) (unsigned char)10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)0] [(unsigned char)0] [i_3])))))));
                            arr_16 [8LL] [i_1] [i_3] [i_1] [i_3] = (+(((long long int) (!(((/* implicit */_Bool) arr_1 [i_1 + 3] [i_2]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1734646691)) ? (6798599981487495666LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (2147483645))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1]))))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_0]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_15);
}
