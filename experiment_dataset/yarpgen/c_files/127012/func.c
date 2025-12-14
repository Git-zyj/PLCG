/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127012
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
    var_17 += ((/* implicit */_Bool) (-(var_5)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [(short)9] [(short)9] = ((/* implicit */unsigned short) min(((short)20720), ((short)-20721)));
            var_18 *= ((/* implicit */unsigned long long int) (signed char)120);
            var_19 += ((/* implicit */unsigned short) 1740312986);
            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37586)) & (((((/* implicit */_Bool) 0U)) ? (3) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_15))) >= (min((1397215769), (((/* implicit */int) (signed char)-4))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)10888))))) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */int) ((((/* implicit */int) (short)-32632)) >= (((/* implicit */int) var_14)))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) -572405362);
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned short) ((arr_3 [i_2] [i_0] [i_0]) % (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (5712927872702039607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned char) min((3497430580U), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_13))))))))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)91));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) var_3)), (((/* implicit */unsigned int) (unsigned short)26841))))) ? (2102354574859651674LL) : (((/* implicit */long long int) ((arr_7 [i_0] [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38694))))))));
                    }
                } 
            } 
        }
        arr_17 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (+(1132156913U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_12)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_20 [i_6] = ((/* implicit */signed char) 2064896301U);
        var_27 += ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_3)))));
        var_28 = ((/* implicit */unsigned char) arr_4 [i_6] [i_6] [i_6]);
    }
}
