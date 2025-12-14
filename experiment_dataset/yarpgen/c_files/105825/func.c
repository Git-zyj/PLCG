/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105825
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 8527640658480193389LL)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_14 &= ((/* implicit */unsigned int) ((_Bool) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0 - 1] [0LL])))));
                        arr_11 [i_0] [i_0] [5LL] [5LL] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_1] [i_2] [i_0 - 1])), (arr_10 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)90)) ? (3264303054U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-124)))))))) : (((12144134135783484879ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10)))))));
                    }
                    var_15 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (short)-31959))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) (~((-(12144134135783484879ULL)))));
                        arr_14 [i_0] [i_0] [i_2] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_2 [i_0]))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [(unsigned short)9] [10LL] [i_2] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)6144))));
                        arr_18 [i_0] [i_1] [(signed char)1] [5LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */long long int) 390417947U)) : (-1229777500465320326LL)))) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 - 1])));
                        arr_19 [(short)4] &= ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [(short)8] [6ULL])), (((unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
                        arr_20 [i_1] [i_0] [i_2] [7U] [i_2] = ((/* implicit */signed char) 11360285038557715958ULL);
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1230542741U)) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2])) / (((/* implicit */int) arr_15 [i_0 - 1] [(signed char)1] [i_0 - 1])))))))) ? (min((4207675829U), (((/* implicit */unsigned int) (unsigned short)14713)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 7; i_7 += 3) /* same iter space */
                        {
                            arr_27 [4U] [i_0] [4U] [4U] [4U] = ((/* implicit */unsigned long long int) ((arr_26 [i_0 - 1] [i_1] [i_2] [i_0] [10ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) 733119086229939140LL))))));
                            arr_28 [i_1] [(short)10] [i_0] [i_7] = ((/* implicit */long long int) arr_22 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_7 + 3]);
                        }
                        /* vectorizable */
                        for (short i_8 = 1; i_8 < 7; i_8 += 3) /* same iter space */
                        {
                            var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0]))) == (arr_31 [i_0 - 1]));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_3 [3LL] [i_2] [i_6]))));
                        }
                        for (short i_9 = 1; i_9 < 7; i_9 += 3) /* same iter space */
                        {
                            var_20 += ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2]);
                            var_21 = ((/* implicit */_Bool) var_4);
                            arr_36 [i_0] [i_1] [i_2] [4LL] [i_9 + 3] = ((((-2037215134354466057LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)0)));
                            var_22 = ((/* implicit */short) (-(min(((+(((/* implicit */int) (signed char)-124)))), (((((/* implicit */_Bool) (unsigned short)14716)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) (short)-23241))))))));
                        }
                        arr_37 [i_0] [i_0] [(short)10] = ((/* implicit */short) arr_3 [i_0 - 1] [i_1] [i_0 - 1]);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) max(((short)-2), (((/* implicit */short) (signed char)-104))))) - (((/* implicit */int) ((signed char) (short)32742)))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [10LL]))) * (((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0])), (var_2)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32746))))) : ((-(var_12)))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) var_10);
    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (min((((/* implicit */int) var_11)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5))))))));
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min(((~(((/* implicit */int) (short)32767)))), (((/* implicit */int) var_2)))))));
}
