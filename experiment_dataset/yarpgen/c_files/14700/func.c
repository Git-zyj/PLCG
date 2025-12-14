/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14700
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((((unsigned int) 12690059712029402737ULL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_14 ^= ((/* implicit */int) 4294967285U);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            var_15 ^= ((/* implicit */unsigned int) 18446744073709551592ULL);
            arr_4 [(unsigned char)20] [i_1] &= ((/* implicit */short) (signed char)-109);
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((int) var_7))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_1))))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? ((~(25))) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) (signed char)-64))));
                        arr_10 [i_0] [(unsigned short)20] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((unsigned char) (short)32766))), (1682449781U))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (arr_6 [i_0] [i_0] [(unsigned char)11])))));
                        var_17 &= ((/* implicit */long long int) (~(min((min((24ULL), (((/* implicit */unsigned long long int) (short)-19677)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12696))) | (4ULL)))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned char) var_3)), (arr_2 [i_0]))))) ? ((+(arr_0 [(unsigned char)0] [i_2]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) arr_1 [i_3])), (arr_3 [i_3] [i_1] [i_3]))))))));
                    }
                } 
            } 
        }
        var_19 *= ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) 1792580070U)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (unsigned short)33748)))))) << (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)12701)))), ((((_Bool)1) ? (((/* implicit */int) arr_7 [(unsigned char)2] [i_0] [(unsigned short)14] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)17775))))))));
    }
    var_20 = ((/* implicit */long long int) (unsigned char)85);
}
