/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114090
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
    var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)33193)), (17018999352563499608ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((var_2), (((/* implicit */unsigned int) (short)60))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17018999352563499608ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-61)) ? (((/* implicit */int) (signed char)122)) : (1708399292)))) : (((unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32156)))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 3])) ^ (((/* implicit */int) var_0))))) ? (((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2]))))) : (var_1)));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)60)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-33))))))) * (var_1)));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) 4294967286U);
        var_18 = ((/* implicit */unsigned char) ((((((unsigned long long int) var_8)) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (var_2)))))) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (unsigned short)2471))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
            var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) & (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) : (var_12))));
            var_21 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)44127)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((var_7) != (((/* implicit */int) (signed char)12)))))))));
            var_22 *= ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (arr_11 [i_2] [i_3])))), (((short) var_12))))) << (((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-113)))) + (434))));
        }
        var_23 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 17018999352563499608ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_2 [i_2] [i_2]))));
    }
}
