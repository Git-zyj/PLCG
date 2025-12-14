/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156713
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 += ((unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) : (15832093631924970373ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_2)))))));
        var_20 = ((/* implicit */short) var_9);
        var_21 = ((/* implicit */unsigned char) (~(((((_Bool) var_11)) ? ((~(-3057287984753136688LL))) : (((/* implicit */long long int) ((unsigned int) -576373507)))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned int) ((unsigned char) var_6))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((int) (~(1788238332U))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -5232088714377247417LL)) ? (((/* implicit */int) ((signed char) 1647500541U))) : ((~(((/* implicit */int) var_10))))))))));
        arr_6 [11LL] = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_9 [(short)4] = ((/* implicit */long long int) var_9);
        arr_10 [(signed char)13] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)-10365))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_16 [(signed char)5] [i_4] [5LL] [(unsigned char)15] = ((/* implicit */short) ((signed char) 1279273000585293952LL));
                    arr_17 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9642)) ? (348493639U) : (126976U))))));
                    var_25 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -4975005858165614199LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (-1LL))) % (((/* implicit */long long int) ((unsigned int) var_13)))));
                    arr_18 [12ULL] [i_4] [1LL] [(signed char)4] = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_6))))) | ((~(var_1))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [(unsigned char)7] [(unsigned short)5] [i_4] [10] [i_4] [(signed char)14] [1U] = ((/* implicit */int) (short)32754);
                                arr_25 [(unsigned char)0] [12LL] [9ULL] [12LL] [i_4] = ((/* implicit */short) (~(((unsigned int) var_13))));
                                arr_26 [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) var_2))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) var_15)) << (((var_7) - (1207584570U)))))))));
                                var_26 = ((/* implicit */unsigned char) ((short) 4835179851903908303ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
