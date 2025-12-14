/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104904
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(max((-7987022522935710081LL), (var_7)))))) != ((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_0] [i_0])))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (short)-29382))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)244)) - (218)))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        var_13 = min((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (((arr_7 [i_0] [i_1] [i_2] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -7780639140290113297LL)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (signed char)-9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61106)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)56033)))) || (((/* implicit */_Bool) ((((((var_7) / (((/* implicit */long long int) -628094658)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) : (var_8))) - (179LL))))))));
                            var_14 = ((/* implicit */unsigned long long int) (signed char)-89);
                            arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (arr_7 [i_0] [i_3 - 2] [i_1 + 1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [i_1])) & (((/* implicit */int) (unsigned short)47436)))))))));
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_2] [i_3] [i_2] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        var_15 = ((/* implicit */unsigned short) ((((-1982544956955953545LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32767)) - (32767)))));
                        arr_20 [i_2] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)25)))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65511)));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (min((min((620882357U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (unsigned char)255)))));
        /* LoopSeq 1 */
        for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            arr_26 [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? ((-(556018701U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-22432), (((/* implicit */short) (signed char)-7))))))))));
            var_17 = ((/* implicit */signed char) ((2270288788249749204LL) < (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51884), ((unsigned short)12869)))))));
        }
        arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), ((unsigned short)65513)))) ? (min((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned short)17101)))), (((/* implicit */int) ((short) (short)-12596))))) : (-1)));
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((-7816671799512679159LL), (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)7168)) + (((/* implicit */int) (unsigned char)3))))) : (var_2)))));
        var_18 += ((/* implicit */long long int) ((((((/* implicit */int) arr_28 [i_8] [i_8])) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (-(4093263737U)))) : ((+(var_4)))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8])) ? (min((11105843062703035932ULL), (((/* implicit */unsigned long long int) arr_29 [i_8])))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), ((unsigned char)105)))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_2))) : (((long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_28 [i_8] [i_8]), (arr_28 [i_8] [i_8]))))));
        arr_31 [i_8] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15029)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (short)-32))))) : (36028797018963904LL))), (((/* implicit */long long int) ((((/* implicit */long long int) arr_29 [i_8])) != (min((7816671799512679139LL), (((/* implicit */long long int) var_5))))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 536868864)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (min((var_9), (var_9))))))) : (-1408297059623570863LL)));
}
