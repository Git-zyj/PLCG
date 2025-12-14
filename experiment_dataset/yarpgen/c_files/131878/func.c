/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131878
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
    var_17 ^= ((/* implicit */int) ((((/* implicit */int) var_5)) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (var_15))) ? ((~(((/* implicit */int) (signed char)53)))) : (((/* implicit */int) var_6))))));
    var_18 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)-13005))))));
            var_19 = ((/* implicit */unsigned char) ((var_7) ? (((((/* implicit */_Bool) (short)-13005)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)12981)))) : (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) (signed char)53)))))));
            var_20 |= ((/* implicit */unsigned short) var_9);
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_8))) && (((/* implicit */_Bool) ((var_15) >> (((var_4) - (5914837654379132408ULL))))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24839)) ? (var_9) : (((/* implicit */long long int) arr_3 [i_0] [(short)9]))))) / (var_15)));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((3101335801U), (((/* implicit */unsigned int) (signed char)71))))) ? (min((8423458949380910850ULL), (var_16))) : (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) -4546080911360991374LL)))))) <= (var_4)));
        var_22 = ((/* implicit */unsigned int) var_6);
        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), ((-(var_15)))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) min((var_24), (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_15)))), ((+(min((arr_9 [i_2] [i_2]), (((/* implicit */long long int) var_14))))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((unsigned int) ((((/* implicit */_Bool) 3101335788U)) ? (452251930U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        var_26 = ((/* implicit */long long int) ((((((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [(short)15]))) < (6354639605127238931LL))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-5681)) : (-1823905590))) : (((/* implicit */int) var_6)))) + (2147483647))) << (((min((min((var_15), (((/* implicit */unsigned long long int) arr_0 [i_2])))), (((((/* implicit */_Bool) (signed char)112)) ? (14499552648660995845ULL) : (((/* implicit */unsigned long long int) var_13)))))) - (4326633763776844587ULL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11002)) ? (((var_5) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_1))));
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-29564)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) : (1193631507U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1372102476516002653LL)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (short)-14445)))))));
            arr_16 [14ULL] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_3]);
        }
    }
    for (int i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        var_28 ^= ((/* implicit */unsigned short) ((((arr_18 [i_4 + 1]) <= (arr_18 [i_4 - 1]))) ? (((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (arr_18 [i_4 + 1]) : (arr_18 [i_4 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-113), ((signed char)-72)))))));
        var_29 = ((/* implicit */unsigned int) var_15);
    }
    for (int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        arr_24 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 - 1]))) != (14499552648660995845ULL)))) * ((+(((((/* implicit */_Bool) 18248432694532341253ULL)) ? (var_11) : (((/* implicit */int) (short)26678))))))));
        arr_25 [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-27662)), (15488038997886040164ULL)))) ? (18446744073709551601ULL) : (((((/* implicit */_Bool) (short)14519)) ? (7761480927409687705ULL) : (((/* implicit */unsigned long long int) -24)))))));
    }
    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(3101335789U)))))) ? (((/* implicit */int) var_10)) : (((((((((/* implicit */int) (signed char)-27)) + (2147483647))) << (((/* implicit */int) var_10)))) ^ (((/* implicit */int) var_14))))));
    var_31 = ((/* implicit */int) min((((/* implicit */short) ((_Bool) (short)0))), (var_1)));
}
