/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110492
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_9))));
                        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_0] [(signed char)5] [i_0] [i_2] [i_3])), (9223372036854775807LL)))) || (((/* implicit */_Bool) (short)32759)))));
                        var_19 = ((/* implicit */long long int) 2043508106);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) min((var_20), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_21 = ((/* implicit */signed char) arr_13 [i_4]);
        var_22 -= var_11;
        var_23 = ((/* implicit */unsigned char) (short)32759);
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) arr_17 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (var_13)));
        arr_19 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)32765))) && (((/* implicit */_Bool) arr_15 [i_5]))))), (arr_15 [i_5])));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                for (unsigned int i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) - (var_13)));
                        var_24 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 + 1] [i_7 + 2] [i_7 + 1]))) >= (-1574194197421282201LL))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_30 [i_9] [i_9]))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) 12849451098732203282ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32759))))) : (((/* implicit */int) (short)-32767)))))));
    }
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_10]))) | (((long long int) (short)-32760))));
        var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7918188025458486952LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_10]))))) <= (max((arr_30 [i_10] [i_10]), (((/* implicit */unsigned int) arr_29 [i_10]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_10] [i_10])) >= (((/* implicit */int) arr_14 [i_10])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            var_29 = ((/* implicit */short) arr_17 [(unsigned short)6]);
            var_30 = ((/* implicit */signed char) arr_21 [i_10] [i_11] [12]);
        }
    }
    var_31 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned short) var_16))));
}
