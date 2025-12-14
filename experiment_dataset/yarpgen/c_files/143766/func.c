/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143766
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [(unsigned char)10] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1206904064)) ? ((+(((/* implicit */int) (signed char)116)))) : (((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) var_11)))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned long long int) 0ULL));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((int) ((arr_0 [i_0] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        arr_10 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */int) ((max((max((var_17), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))), (((/* implicit */unsigned int) (signed char)63)))) == (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)51085)) ^ (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (arr_0 [i_3 - 1] [i_3 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (max((((/* implicit */unsigned int) (signed char)-51)), (var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))));
                        arr_11 [4U] [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((var_19) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]))))), (var_16))) << (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_1] [0LL] [0LL] [i_3])), (var_14)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0])), (arr_0 [i_2] [4ULL])))))))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_17))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))))));
            var_23 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_1] [(signed char)1]);
            arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0])))))))) ? (((/* implicit */int) (signed char)51)) : (max((max((((/* implicit */int) var_1)), (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))), (((/* implicit */int) (signed char)11))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_7 [i_0] [i_0] [i_0]));
            var_24 += ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) 11304128008780455190ULL)) ? (-1284559124) : (((/* implicit */int) (unsigned short)65535)))), ((+(((/* implicit */int) arr_1 [(unsigned char)0] [(unsigned short)8]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_21 [(unsigned char)2] [i_0] = ((/* implicit */unsigned long long int) arr_20 [i_0]);
            var_25 = ((/* implicit */long long int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91)))));
        }
    }
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2047)) && (var_19))))) + (var_15))))));
    var_27 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) 3284757658461257970ULL)) ? (((/* implicit */unsigned long long int) var_15)) : (var_0)))))));
    var_28 = ((/* implicit */unsigned short) var_19);
}
