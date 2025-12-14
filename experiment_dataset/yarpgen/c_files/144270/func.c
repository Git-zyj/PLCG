/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144270
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_18 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)159)) << ((((((-2147483647 - 1)) - (-2147483621))) + (32))))) >> (((((-164783792) | (arr_5 [i_0] [i_1]))) + (152182813)))));
                var_19 += (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_13 [i_1] [i_1] |= arr_9 [i_0] [i_1] [i_1];
                            var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                            var_21 = max(((+((+(-250897305))))), (((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned char)0] [i_1] [i_2])) != (((((/* implicit */_Bool) arr_2 [(unsigned char)0] [6] [3])) ? (-250897324) : (((/* implicit */int) arr_0 [i_2]))))))));
                            var_22 = ((/* implicit */unsigned char) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((unsigned char) max((var_7), (((/* implicit */int) var_16)))));
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_24 = (+((+(arr_15 [i_4]))));
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_14 [i_4] [i_4]))) / (((arr_14 [i_4] [i_4]) / (arr_14 [i_4] [i_4])))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~((+(var_4))))))));
        var_26 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)76)) && (((/* implicit */_Bool) (unsigned char)148))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4])) || (((/* implicit */_Bool) arr_15 [i_4])))))));
    }
}
