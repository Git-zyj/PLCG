/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150799
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */int) min(((+(arr_3 [i_1 + 2] [i_1 + 2]))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55333))) : (11846856749434842821ULL)))))));
                    var_14 += ((((/* implicit */_Bool) max(((unsigned short)10220), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (~(6599887324274708795ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)4] [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) (unsigned short)55333)) ? (6599887324274708802ULL) : (((/* implicit */unsigned long long int) arr_6 [12ULL] [12ULL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((11846856749434842821ULL), (11846856749434842797ULL))) % (6599887324274708814ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(16795647681955497805ULL)))))) : (((((/* implicit */_Bool) (+(arr_1 [i_3 - 1])))) ? ((-(11846856749434842797ULL))) : (var_10)))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(11846856749434842814ULL)))))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) var_3))))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1 + 1] [i_2] [i_2] [i_3])), (11846856749434842801ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10459)))))) ? (max((((int) var_8)), (((/* implicit */int) max((((/* implicit */short) (unsigned char)196)), ((short)0)))))) : (max((((var_2) % (((/* implicit */int) arr_4 [i_0])))), (var_2)))));
                        var_17 = ((((/* implicit */_Bool) max((arr_1 [i_2]), ((+(((/* implicit */int) (short)32767))))))) ? ((-(((/* implicit */int) arr_4 [i_3 + 3])))) : (((/* implicit */int) ((unsigned char) ((arr_1 [i_3 + 3]) / (arr_1 [i_1]))))));
                    }
                    var_18 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)55333))) ? (arr_6 [(unsigned short)0] [i_2]) : (((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) (unsigned short)55316))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_2] [i_4] [i_5] [i_4])), (arr_9 [i_1] [i_4] [i_1] [i_1])))) ? (((/* implicit */int) min((arr_5 [i_5] [i_1] [i_1] [i_0]), ((unsigned short)55299)))) : (((/* implicit */int) (unsigned char)255)))))))));
                                var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_1] [i_4 + 1])) ? ((-(((/* implicit */int) (short)7159)))) : (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (unsigned short)10226))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 13ULL)) ? (18446744073709551598ULL) : (18446744073709551598ULL))) <= (((((/* implicit */_Bool) arr_2 [i_4])) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5]))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8))) & (24ULL))));
                                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 2])))))));
                                arr_16 [i_2] [i_2] [i_1] [i_4 - 3] [i_5] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [i_4] [i_5])) ? (((/* implicit */int) (unsigned short)55299)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (max((((/* implicit */unsigned long long int) (unsigned short)55299)), (8890705653857439718ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((short)-3), ((short)-16384)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned char i_8 = 3; i_8 < 14; i_8 += 2) 
            {
                {
                    arr_26 [i_7] [i_7] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_7] [i_6] [i_6] [i_8])) || (((/* implicit */_Bool) 27ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_8 - 3]))))) : (((/* implicit */int) ((unsigned short) arr_24 [i_6] [i_6])))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (var_0)));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (short)-26))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32765)) : (((((/* implicit */_Bool) (short)-15839)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (short)26))))))));
                }
            } 
        } 
    } 
    var_24 -= ((unsigned long long int) min((((unsigned short) var_3)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))));
}
