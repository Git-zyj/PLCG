/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175368
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_16))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) & (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */unsigned int) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-115)) ? ((+(((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */int) var_14)) * (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) var_16))));
        arr_8 [i_1] [(short)20] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) + (min((3580787314U), (((/* implicit */unsigned int) (signed char)127)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (((unsigned int) arr_5 [i_1]))))) || (((/* implicit */_Bool) var_4))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) (unsigned char)225)))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) -230592340)))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_12 [i_2] [i_2 + 3]))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3178633713U)) ? (((/* implicit */int) (signed char)-1)) : (-230592340)));
        }
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_25 ^= ((/* implicit */short) var_17);
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_10 [i_1] [(short)2] [i_1])))))))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_18))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_18)))))))));
            arr_17 [16U] = min((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */signed char) var_3)), (arr_10 [i_1] [i_1] [i_1])))) > (((((/* implicit */_Bool) arr_15 [(signed char)17] [i_3] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) arr_12 [(signed char)5] [i_1]))))))), (var_5));
            arr_18 [(short)16] [i_3] = ((/* implicit */int) ((signed char) arr_12 [i_1] [i_1]));
            arr_19 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [(signed char)20])), (var_2)))) : ((+((~(((/* implicit */int) (short)22321))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            for (short i_6 = 4; i_6 < 24; i_6 += 3) 
            {
                for (signed char i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_5 + 3])) ? (((/* implicit */int) var_3)) : (-230592353)))) ? ((+(((/* implicit */int) arr_27 [i_4] [i_5 - 1] [i_6] [i_7] [i_4] [i_7])))) : (((/* implicit */int) arr_27 [(short)2] [i_5] [i_6] [i_7 + 2] [i_5 + 4] [(short)2]))));
                        arr_29 [i_6] [i_4] = ((/* implicit */short) ((arr_26 [i_4] [i_5 + 2] [i_5 + 2]) & (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_4] [8ULL])))))));
                    }
                } 
            } 
        } 
        arr_30 [8U] [i_4] = ((/* implicit */unsigned short) arr_22 [i_4] [i_4]);
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_4] [i_4])) + (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_8 = 1; i_8 < 8; i_8 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)0)))));
        arr_33 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) << (((4546964214061040763ULL) - (4546964214061040740ULL))))) % (((/* implicit */int) (short)-1))));
        arr_34 [i_8] [i_8 - 1] = ((/* implicit */signed char) ((short) var_17));
        arr_35 [i_8] = ((((/* implicit */_Bool) arr_14 [i_8 - 1] [i_8 + 3])) ? (((/* implicit */unsigned long long int) (+(4294967295U)))) : (((var_3) ? (var_18) : (((/* implicit */unsigned long long int) arr_32 [(_Bool)1] [i_8])))));
    }
    var_30 = ((/* implicit */unsigned int) var_12);
    var_31 = ((/* implicit */unsigned int) var_13);
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) - (((/* implicit */int) (short)8863))))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_16))));
}
