/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165488
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
    var_20 = ((/* implicit */long long int) var_15);
    var_21 |= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned short)2] |= ((/* implicit */short) ((((/* implicit */_Bool) 3548640071U)) ? (-1202528694) : (((/* implicit */int) (unsigned short)3727))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            var_22 += ((/* implicit */short) var_9);
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        }
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) arr_3 [i_0])), (-8955921448119210675LL))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)34638)))), (((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((3999748937036307634LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0] [6LL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)61824))))))) ^ (max((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)61823)) : (((/* implicit */int) arr_1 [(unsigned short)16] [(unsigned short)16])))))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_26 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -5664154220442851715LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [4LL]))) : (arr_7 [i_0]))), (((/* implicit */long long int) ((signed char) var_12)))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((arr_6 [i_0] [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1050546272U)) && (((/* implicit */_Bool) var_1)))))))));
            var_27 += ((/* implicit */long long int) min((((int) ((((/* implicit */_Bool) 1050546272U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61808))) : (100533958298125638LL)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_3 [i_0]))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_7 [i_0]))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-7)) != (((/* implicit */int) (unsigned char)179)))))) != ((+(1259306128U))))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((_Bool) (unsigned short)1004))) : (((((/* implicit */_Bool) 3244421024U)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (_Bool)0))))))) >= (((((/* implicit */long long int) 3035661167U)) ^ (arr_9 [i_3 - 1]))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) 1259306128U);
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_15 [i_0] [(unsigned short)2] [(unsigned short)2] = ((_Bool) ((arr_6 [i_3 - 1] [i_3 - 1]) ? (min((arr_7 [i_0]), (((/* implicit */long long int) arr_5 [i_0] [(short)9])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)17781)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967295U))))));
                arr_16 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)26);
            }
        }
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
        {
            var_30 = max((((/* implicit */long long int) arr_6 [i_5 - 1] [i_5 + 2])), ((+(-2762933349064989999LL))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_6 [14U] [i_5 + 1])) > (((/* implicit */int) arr_1 [i_5 + 1] [8LL]))))))));
                var_32 = ((/* implicit */_Bool) ((unsigned short) var_9));
                var_33 = ((/* implicit */unsigned int) arr_18 [i_5] [11U] [i_5]);
            }
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_23 [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)49952))))));
                var_34 += ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1)))))) ^ (((/* implicit */int) (!(arr_13 [19] [i_5 + 2] [i_7]))))));
                var_35 += ((/* implicit */unsigned long long int) (+((-(max((((/* implicit */unsigned int) var_17)), (arr_3 [i_0])))))));
                arr_24 [i_0] [(unsigned char)15] [13ULL] = ((/* implicit */unsigned char) var_3);
            }
            arr_25 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (2194924871964472564ULL))))) <= (var_9))));
        }
    }
}
