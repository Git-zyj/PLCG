/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10514
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_1 [(signed char)17])))), ((+(min((204745330), (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15688)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (arr_9 [i_0] [i_1] [i_2 + 4] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 2])) : (min((var_2), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))) + (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)7)))))))));
                            var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])) : (((/* implicit */int) var_1)))))) - (var_2)));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((var_2) < (((/* implicit */unsigned long long int) var_0))))))) : (arr_5 [i_2])));
                            var_13 = ((/* implicit */int) ((unsigned char) ((int) (+(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_7 [i_1])))) ? ((~(((((/* implicit */_Bool) (unsigned char)183)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_5)))) ? (((/* implicit */int) (unsigned char)25)) : ((+(((/* implicit */int) (short)29008)))))))));
                var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (signed char)68))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4101408315U))), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned char) var_8))))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (+(1190976873)));
                            var_16 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 1117728206U)))) ? (((1218138749U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (3110427258U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [0U])) ? (1978703430U) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) ((signed char) 2147483647))) : (-587603657)))), (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) ^ (var_9)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (1647021991) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))))) ? (((long long int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) var_6))))) : ((+(var_5)))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((signed char) 4273697045334356346LL));
                var_19 = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
}
