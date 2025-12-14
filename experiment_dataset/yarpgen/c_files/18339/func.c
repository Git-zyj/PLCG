/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18339
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
    var_17 = ((/* implicit */int) (+((+(((long long int) (unsigned char)118))))));
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    var_19 = ((/* implicit */unsigned short) ((short) ((var_10) | (((/* implicit */unsigned long long int) (~(-752642950)))))));
    var_20 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (unsigned char)32)) + (((/* implicit */int) (unsigned char)32)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((unsigned int) (((-(((/* implicit */int) arr_1 [i_0 + 2])))) + ((-(((/* implicit */int) (unsigned short)56840)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_22 += ((/* implicit */unsigned int) (-(max((((1992176225675364873ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))), (((/* implicit */unsigned long long int) arr_4 [i_2]))))));
                    var_23 = (!((!(((/* implicit */_Bool) -752642946)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_24 |= (+((+(((/* implicit */int) (_Bool)1)))));
                        var_25 = ((/* implicit */int) arr_4 [i_1]);
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)223)))))));
                        arr_12 [i_1] [i_1] [i_2] [(unsigned char)3] [i_1] [i_4] = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0 + 2] [i_1] [i_1] [i_1]));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)58)))), (((/* implicit */int) (_Bool)0))));
                    }
                }
            } 
        } 
    }
    for (signed char i_5 = 2; i_5 < 8; i_5 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) arr_11 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5]);
        var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_5] [i_5])) + (-1211152983)))) - ((+(286393103923998326LL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (signed char)74)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_5] [i_5] [i_5 + 1] [i_5]))))) ? ((-(9223372036854775783LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2473489737U))))))));
    }
    for (signed char i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
    {
        arr_19 [i_6] = ((/* implicit */signed char) 16345149199010889385ULL);
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_6 + 1] [i_6 + 1])), (2101594874698662231ULL))) : ((+(((((/* implicit */_Bool) 2570029797U)) ? (16345149199010889388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154)))))))));
        arr_20 [8U] = ((/* implicit */unsigned long long int) 660281576);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_25 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_8] [3] [i_6] [i_6])) ? (((int) 2101594874698662236ULL)) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) ((signed char) (unsigned char)143))) : (((/* implicit */int) ((unsigned short) (unsigned char)255)))))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((-6334880636831550403LL) - (((/* implicit */long long int) arr_22 [i_6])))))));
                }
            } 
        } 
    }
}
