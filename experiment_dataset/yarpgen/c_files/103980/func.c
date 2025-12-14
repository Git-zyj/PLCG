/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103980
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) (((~(((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (var_12))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-77)) ? (15458110630396127665ULL) : (((/* implicit */unsigned long long int) -4920487706500811343LL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((short) (short)14809))) ? (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ^ (((((/* implicit */_Bool) var_14)) ? (((var_1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_1]))))))));
        var_17 ^= ((/* implicit */short) ((unsigned char) ((unsigned short) (short)27589)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((short) var_2));
            var_19 = var_6;
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2])) ? ((+(((/* implicit */int) arr_9 [i_3])))) : ((-(((/* implicit */int) var_6))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            var_21 += ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)26466))))));
            arr_15 [i_4] = ((/* implicit */signed char) arr_13 [i_2] [i_2]);
        }
        var_22 = ((/* implicit */short) (-((-(var_10)))));
        arr_16 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) | (var_0))))));
    }
    var_23 = ((/* implicit */signed char) 375314777);
    var_24 = min(((short)-31505), ((short)-13040));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (short i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 8; i_8 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_7])) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))));
                        arr_28 [i_5] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((short) ((long long int) var_2)));
                        var_26 = ((/* implicit */unsigned short) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_7] [i_6])))))))));
                        var_27 = (short)-13039;
                        var_28 -= ((/* implicit */int) (unsigned short)8731);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_29 = ((/* implicit */_Bool) var_5);
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_9 [19LL])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-84)))))))));
            var_31 = ((/* implicit */unsigned long long int) ((short) (-(var_13))));
        }
    }
}
