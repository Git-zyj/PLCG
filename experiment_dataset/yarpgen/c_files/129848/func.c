/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129848
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) var_6)) * (((/* implicit */int) var_9)))) >> (((((/* implicit */int) var_3)) % (((/* implicit */int) var_3)))))) > ((~(((/* implicit */int) ((unsigned char) 1089549959728350031LL)))))));
                    var_14 &= ((((/* implicit */int) (signed char)-56)) - (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_1]))));
                    arr_9 [9U] [i_0] [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) > (-1456145991)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)169)) < (-471598120)))))));
                    var_15 = ((/* implicit */_Bool) 1053770595U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned int i_6 = 4; i_6 < 8; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_5] [i_3] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-123)))) % ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-56)) >= (((/* implicit */int) (_Bool)1)))))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_6 - 2] [i_7] [i_7]))))), (((5116115708268911428LL) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_6 + 1] [i_7] [i_7] [i_7] [0]))))))))));
                            }
                        } 
                    } 
                } 
                var_17 *= ((((((/* implicit */unsigned int) min((1699121867), (((/* implicit */int) (signed char)63))))) | (13U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((var_8), (((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
                arr_22 [(unsigned char)3] [(unsigned char)3] [i_3] = ((unsigned char) ((unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_3] [i_3])), (var_4))));
                var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)155))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)));
            }
        } 
    } 
    var_19 = (~(((/* implicit */int) (_Bool)1)));
    var_20 += ((/* implicit */int) var_10);
}
