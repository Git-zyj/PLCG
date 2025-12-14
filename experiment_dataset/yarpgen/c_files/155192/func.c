/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155192
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
    var_12 &= max((((/* implicit */long long int) ((7775511492114698655LL) < (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (var_3));
    var_13 = ((/* implicit */long long int) min((16478331180751584707ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [(unsigned char)17] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) (!(((((((/* implicit */int) (unsigned char)121)) & (((/* implicit */int) (unsigned char)223)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1146686002965361417LL)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 3] [i_0] [i_0] [14ULL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), ((unsigned char)6)))), (2062762715700679367ULL)));
                                var_14 = ((/* implicit */unsigned long long int) ((((long long int) (~(((/* implicit */int) arr_7 [i_1] [i_0]))))) <= (((max((-7775511492114698655LL), (((/* implicit */long long int) arr_2 [i_0])))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) arr_5 [i_0]))))))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+((+((~(3346008230082499331ULL))))))))));
                                var_16 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(-7075965069610181588LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_1] [i_3] [(unsigned char)2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))))))) : (((unsigned long long int) 7775511492114698651LL))))));
                                arr_15 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) - (10005297347522939989ULL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2])) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_0] [i_1] [i_0] [i_0]))) != (3346008230082499318ULL))))))) : (((3346008230082499331ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))));
                }
            } 
        } 
    } 
}
