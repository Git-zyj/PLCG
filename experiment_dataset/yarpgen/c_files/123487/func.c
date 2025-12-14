/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123487
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (+(-2133329136))));
        }
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)30990))) ? (((((/* implicit */_Bool) 17143914450887227770ULL)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)107)))) : (((/* implicit */int) (_Bool)1))));
            arr_11 [i_0] [i_2] = ((/* implicit */int) (signed char)118);
        }
        for (signed char i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                arr_18 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)-119))))));
                arr_19 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */int) ((unsigned short) (signed char)-11));
            }
            arr_20 [i_3] [i_3 + 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (var_2)));
            arr_21 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned char) (unsigned short)100);
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_24 [i_0] [i_5] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)18)))) ? (-1741226299) : (((/* implicit */int) (short)13337))));
            arr_25 [(_Bool)1] [i_5] [i_0] = ((/* implicit */signed char) (-(arr_14 [i_5 + 1] [i_5 + 1] [i_5])));
            arr_26 [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) 17143914450887227779ULL);
            arr_27 [(short)0] |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)88))));
            arr_28 [i_0] [i_0] [(unsigned short)18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)56)) : (0)))) ? (((/* implicit */int) (short)23296)) : (((/* implicit */int) (signed char)10))));
        }
        arr_29 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) -6)) : (((1302829622822323840ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11371)))))));
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44462))) : ((((_Bool)1) ? (-4738592910850448604LL) : (((/* implicit */long long int) 0))))));
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_34 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6])) << (((588506922U) - (588506913U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (-1425407001))))))) : ((~(((((/* implicit */_Bool) arr_9 [(short)0] [i_6] [(short)0])) ? (-1425407001) : (((/* implicit */int) arr_23 [(short)17])))))));
        arr_35 [i_6] = ((/* implicit */unsigned int) (~(((long long int) (_Bool)1))));
        arr_36 [i_6] = ((short) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10108))) % (var_5)))));
        arr_37 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (1302829622822323845ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)55427)) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) arr_8 [i_6] [4LL]))))));
        arr_38 [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6]))))), (max((var_11), (16686745716096323991ULL)))));
    }
    var_15 = ((int) var_6);
}
