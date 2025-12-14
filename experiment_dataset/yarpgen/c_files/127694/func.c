/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127694
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (11289573851969545297ULL)))) ? (((((/* implicit */_Bool) (short)4014)) ? (549755813887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66)))))) ? (((((/* implicit */_Bool) 24)) ? (var_10) : (11289573851969545297ULL))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) : (6095608239983617204ULL))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) : (arr_3 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-23)) : (941373012))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) (signed char)48))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 66846720U)) ? (var_4) : (((/* implicit */unsigned long long int) -1536424170))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_2 + 1]) : (9222246136947933184ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (var_9) : (66846719U))))));
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)110))))) : (((((/* implicit */_Bool) (signed char)31)) ? (arr_8 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (arr_4 [8ULL] [i_2 - 2] [i_2]) : (arr_4 [i_2 + 1] [i_2 + 1] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (554251057) : (((/* implicit */int) (signed char)-49))))) : (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_2] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_7 [0LL])) : (((/* implicit */int) (short)5551))));
        arr_12 [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned long long int) 3907909114U)) : (arr_3 [i_3 - 1])));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)));
    }
    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5726961614738158830LL)) ? (((/* implicit */long long int) 1748233675U)) : (3527212226682036618LL)))) ? (((((/* implicit */_Bool) 5969526323963961183ULL)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (signed char)118)) ? (var_0) : (((/* implicit */int) var_1))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20303)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (var_10)))) ? (((((/* implicit */_Bool) arr_7 [4LL])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (arr_0 [i_4 - 1] [i_4 + 1]) : (3623952428U)))))))));
        var_20 = ((((/* implicit */_Bool) (short)30667)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (5120330087718519371ULL));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13439673385053282568ULL)) ? (18446744073709551615ULL) : (arr_14 [i_4 + 1])))) ? (((((/* implicit */_Bool) (short)30671)) ? (arr_14 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))) : (((((/* implicit */_Bool) (signed char)50)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127)))))));
        arr_15 [11U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_9)) : (7502109990791763943LL)))) ? (((((/* implicit */_Bool) var_5)) ? (10799733094671320421ULL) : (((/* implicit */unsigned long long int) arr_13 [i_4 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (8ULL) : (((/* implicit */unsigned long long int) var_2))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [(unsigned char)20])) : (((/* implicit */int) arr_17 [i_5]))))) ? (arr_16 [i_5 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 2])))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -5642734790895216667LL)) : (arr_26 [i_7 - 1] [i_7 + 1]));
                        arr_27 [i_5] [i_5] [12LL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_5 - 1] [i_6 + 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (5849659345218145302LL)));
                    }
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (3788644684U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    arr_28 [i_7] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)6132)) ? (arr_21 [i_5 + 1] [i_6 + 1]) : (arr_26 [i_5 + 2] [i_5])));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2972657781820024358ULL)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (short)142))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-127)) ? (arr_22 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    }
}
