/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121311
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
    var_13 = ((/* implicit */int) min((((unsigned int) ((int) (_Bool)0))), (((/* implicit */unsigned int) ((short) ((var_3) ? (((/* implicit */int) var_2)) : (var_8)))))));
    var_14 = ((short) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-31808)) : (-808903098))), (((/* implicit */int) (unsigned short)63050))));
    var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) ((_Bool) var_2))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) var_4)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) ((signed char) var_2)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((int) ((short) (short)-1)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((long long int) ((unsigned int) (_Bool)0));
                    var_18 = ((int) ((((/* implicit */_Bool) (short)31482)) ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) 346778319U))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) : (((long long int) -1672670075))));
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [i_4]))))) ? (((int) 1245227257)) : (((/* implicit */int) ((unsigned short) 0U)))));
                        }
                    } 
                } 
            } 
            var_21 += ((/* implicit */signed char) ((unsigned short) ((_Bool) arr_5 [16U])));
            var_22 *= ((/* implicit */short) ((int) ((short) 1880026954173590137LL)));
            var_23 &= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_19 [i_0] [i_3]))));
        }
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            arr_24 [i_0] [i_7] = ((/* implicit */signed char) ((int) ((unsigned int) (_Bool)1)));
            arr_25 [i_0] [i_7] = ((/* implicit */unsigned short) ((int) ((unsigned short) arr_12 [i_0])));
            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) -1622671831)) ? (((/* implicit */int) ((unsigned char) 1622671831))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
        }
    }
    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_25 -= ((/* implicit */_Bool) ((short) ((unsigned int) min((-1LL), (((/* implicit */long long int) 1622671830))))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned int) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) (short)32763)) ? (arr_18 [i_8] [i_9] [i_10] [i_11] [i_8] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        var_27 = ((/* implicit */short) min(((unsigned short)65535), (((/* implicit */unsigned short) ((short) 9223372036854775807LL)))));
                        arr_38 [i_9] [i_10] [i_10] [i_9] [i_8] [i_9] = ((unsigned int) min((((/* implicit */unsigned int) ((int) arr_30 [i_9] [i_10] [i_11]))), (((unsigned int) arr_28 [i_8] [i_8]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-633422318), (((/* implicit */int) (short)-20619))))) ? (((((/* implicit */_Bool) -1622671831)) ? (((/* implicit */int) (unsigned char)123)) : (-526213695))) : (((((/* implicit */_Bool) 1820225004852649363ULL)) ? (-1243946691) : (1243946668)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) (-2147483647 - 1)))), (max((3804421236U), (((/* implicit */unsigned int) (-2147483647 - 1)))))))) : (min((((unsigned long long int) arr_22 [i_8] [i_8] [i_8])), (((/* implicit */unsigned long long int) ((_Bool) arr_27 [i_8])))))));
        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned int) 1142107939)), (((/* implicit */unsigned int) ((short) 526213694)))))) ? (((/* implicit */int) ((_Bool) (short)-1))) : (((/* implicit */int) ((unsigned char) ((int) arr_11 [i_8] [i_8] [i_8]))))));
        var_30 = ((/* implicit */short) ((int) ((int) min((((/* implicit */unsigned short) arr_16 [i_8])), (var_2)))));
    }
    var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) var_11)), (((/* implicit */long long int) ((int) var_3)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)4716)) ? (((/* implicit */int) (unsigned short)62450)) : (2147483647))))) : (((/* implicit */int) ((_Bool) max((-1243946669), (((/* implicit */int) var_2))))))));
}
