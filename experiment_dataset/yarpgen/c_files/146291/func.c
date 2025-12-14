/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146291
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
    var_18 = var_17;
    var_19 = ((/* implicit */unsigned long long int) var_7);
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((((var_17) << (((var_11) - (4582803399414694838ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_1), (((/* implicit */unsigned long long int) var_16)))), ((-(arr_1 [i_0] [i_0])))))) ? ((~(10976095962758228691ULL))) : (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [7U]))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) 2895958459U)) ? (10055033204556947805ULL) : (((/* implicit */unsigned long long int) 1399008836U))))))));
        var_22 = ((/* implicit */unsigned long long int) (+(1399008848U)));
        var_23 = ((/* implicit */unsigned int) min((max((72057594037927936ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3328442010U))))))), (((/* implicit */unsigned long long int) (short)-30663))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_24 = ((long long int) max((2895958459U), (((/* implicit */unsigned int) (unsigned char)77))));
            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_2 - 1])))) ? (min((arr_5 [i_1]), ((~(18446744073709551613ULL))))) : ((+(((((/* implicit */_Bool) arr_6 [(unsigned char)2] [i_2])) ? (3ULL) : (10803181727635347613ULL)))))));
            var_26 = ((/* implicit */unsigned int) (unsigned short)41539);
        }
        for (short i_3 = 3; i_3 < 15; i_3 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_0)) : (arr_10 [3LL])))) ^ (((((/* implicit */_Bool) var_8)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 2])))))))) && (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)255)), (arr_4 [i_3 - 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1920))))))))));
            arr_11 [(short)0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2649398574U)) ? (((/* implicit */unsigned long long int) var_2)) : (var_17))) > (((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_1])))))))) & (arr_8 [i_1] [i_1])));
            var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (min((((72057594037927926ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14341))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) << (((((var_7) + (55501106))) - (23))))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_16 [i_1] [4ULL] [(short)0] [i_1] [4ULL] = (~(max((((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 - 1])), ((~(var_17))))));
                        var_29 = max(((-(var_8))), (((/* implicit */unsigned long long int) (~(min((var_3), (((/* implicit */unsigned int) (short)14341))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)15310)), (1884370419U)));
        }
        var_31 -= max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14316)) ? (2410596876U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92)))))));
    }
    var_32 ^= ((/* implicit */short) var_16);
}
