/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183696
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
    var_16 &= ((/* implicit */_Bool) 9204447711181429167LL);
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)81)))) * (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 9101113891402392637LL);
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_3 [i_0] [(short)15]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (short i_4 = 3; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */short) arr_2 [(_Bool)1] [(unsigned short)15] [i_0]);
                            var_20 = ((/* implicit */short) min((var_20), (((short) ((_Bool) 315696891)))));
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-21019)), (arr_13 [i_0] [i_0] [i_0] [i_0])))) ? (var_2) : (var_8));
        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16382)) / (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)14)))))));
        arr_20 [i_0] = ((/* implicit */_Bool) (+((+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)67))))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : ((-9223372036854775807LL - 1LL)))))));
        var_21 = ((/* implicit */signed char) ((unsigned char) (unsigned short)16399));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (max((arr_24 [i_6]), (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (_Bool)1)), (1562725383))))))))));
        arr_27 [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20996)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [(_Bool)1]))) : (var_12)))) - ((+(-8462951458340978965LL))))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [(signed char)2] [1] [14LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_9 [i_6] [14])))))));
        /* LoopSeq 4 */
        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)32552)) ^ (((/* implicit */int) (unsigned short)63915))))))) ? ((-(((((/* implicit */_Bool) (short)-21019)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21019))) : (958498420340353913LL))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19205)) && (((/* implicit */_Bool) 5489699264386781468ULL))))), (1145234953U))))));
            arr_32 [i_6] [5LL] |= ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_28 [i_6]))) == (((/* implicit */unsigned long long int) var_15)))), ((((~(((/* implicit */int) var_7)))) < (((/* implicit */int) min((((/* implicit */short) arr_25 [i_6])), ((short)-20475))))))));
        }
        for (signed char i_8 = 3; i_8 < 22; i_8 += 1) /* same iter space */
        {
            arr_35 [23LL] [i_8] = ((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6] [i_8 - 1]);
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_39 [i_9] [i_9] [11] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned short)16383)) | (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-8)), ((unsigned char)128)))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((12957044809322770139ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_8] [20LL] [i_8] [i_8 + 2] [i_8 + 1])))))))));
            }
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                var_24 = ((/* implicit */long long int) var_12);
                arr_43 [i_6] [16LL] [i_8] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) ((2696410489U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (8462951458340978965LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))) ? (((unsigned long long int) 3818886859825189869ULL)) : (((/* implicit */unsigned long long int) var_9))))));
                arr_44 [i_6] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3730781719U)), (arr_24 [i_6])))) ? ((+(0ULL))) : (max((((/* implicit */unsigned long long int) (signed char)-119)), (17ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44987))) : (4294967292U)));
            }
        }
        for (signed char i_11 = 3; i_11 < 22; i_11 += 1) /* same iter space */
        {
            var_25 += ((/* implicit */signed char) arr_15 [i_11] [i_6] [i_6] [i_6] [i_6]);
            var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)65513))))));
            var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) arr_11 [i_11 + 2] [i_11 + 1] [i_11] [i_11])) : (((/* implicit */int) arr_11 [i_11 - 1] [i_11 - 2] [i_11] [(signed char)3]))))));
        }
        for (signed char i_12 = 3; i_12 < 22; i_12 += 1) /* same iter space */
        {
            var_28 |= ((/* implicit */_Bool) var_10);
            var_29 = ((unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (230425951) : (-536870912)))));
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_6])) - ((-(((/* implicit */int) (short)19203))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        arr_52 [12] = ((/* implicit */long long int) (!(((((long long int) 3840754155565682651LL)) > (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)12)))))))));
        var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_13] [i_13] [(unsigned short)3])) ? (((/* implicit */int) arr_40 [i_13] [i_13] [i_13])) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (short)-19200)) ? (1145234961U) : (1145234935U))))))));
        arr_53 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_9 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_13] [i_13] [i_13])))), (((/* implicit */unsigned long long int) arr_8 [(signed char)5] [i_13] [i_13] [(short)6]))))) ? (((arr_0 [i_13]) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_49 [i_13] [16] [(short)17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5918))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11365)) && (((/* implicit */_Bool) 7050240642250309237LL))))))));
        var_32 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1145234935U))));
    }
}
