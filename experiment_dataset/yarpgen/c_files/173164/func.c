/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173164
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
    var_11 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)64734))));
        var_12 = ((/* implicit */unsigned char) (unsigned short)809);
        var_13 |= ((/* implicit */int) (~(51656999420495449LL)));
        var_14 = (~(var_4));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_6))));
                arr_10 [(_Bool)1] [i_1] = ((/* implicit */signed char) (+(-4924639525159402972LL)));
                arr_11 [i_0] [11LL] [i_1] [i_2] = 51656999420495449LL;
                arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)15990)) - (15960)))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (_Bool)1)))))))));
            }
            for (long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
            {
                arr_16 [23U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2143406118U))));
                arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)51))));
                var_17 ^= ((/* implicit */signed char) var_6);
                var_18 = ((/* implicit */short) (unsigned short)861);
            }
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
            {
                arr_20 [i_4] [(short)22] [12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8758214108633115308LL)) ? (51656999420495449LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) >= (-51656999420495449LL)))))));
                arr_21 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((var_1) >> (((((/* implicit */int) var_9)) - (63106)))));
            }
            arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)-81))))) ? (((/* implicit */int) var_2)) : (var_8)));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7168)) ? (((((/* implicit */_Bool) (unsigned short)62821)) ? (-770379123801887440LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) 4294967285U))));
        }
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_27 [i_5] = ((/* implicit */short) ((((var_2) ? (((/* implicit */int) (short)-15904)) : (((/* implicit */int) (signed char)-77)))) * ((-(((((/* implicit */int) (unsigned short)11431)) + (((/* implicit */int) var_0))))))));
        var_19 += ((/* implicit */int) (-(max((var_4), (((/* implicit */long long int) var_7))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) ((51656999420495449LL) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) ? (((((/* implicit */_Bool) var_1)) ? (65532U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) var_9)))))));
    }
}
