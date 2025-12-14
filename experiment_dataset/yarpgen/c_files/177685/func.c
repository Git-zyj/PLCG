/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177685
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
    var_17 = ((/* implicit */unsigned int) var_12);
    var_18 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((3953831710U), (((/* implicit */unsigned int) (unsigned char)216)))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (-134217728)))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)4135))))))) : (max((((/* implicit */unsigned long long int) 8866264444392368565LL)), (3827715919131051604ULL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_4 [8U] [i_1] = ((/* implicit */int) var_6);
        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */int) min(((unsigned short)7849), (var_2)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned short)61437)))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (((((/* implicit */_Bool) (unsigned char)216)) ? (3743764199U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60786)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3038175883U)))))) : ((~(-8866264444392368566LL)))))) : (8930619994445673022ULL)));
                    arr_14 [i_2] [i_3 + 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_12 [i_3] [i_4])) == (((/* implicit */unsigned long long int) var_4))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_18 [i_2] = ((/* implicit */unsigned short) max((((unsigned long long int) ((14404222116947416707ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((361535225) / (1357926788))))))));
            arr_19 [10LL] = ((/* implicit */int) arr_12 [i_5] [i_2]);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_28 [i_7] [i_7] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) var_10);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)18679)) < (((/* implicit */int) arr_25 [i_2] [i_6] [i_2] [i_2]))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_8] [i_7 + 2] [i_8]))) | (341135585U))) - (341135586U))))))));
                        arr_29 [i_2] [2ULL] [i_7] = ((/* implicit */unsigned long long int) ((long long int) var_5));
                    }
                } 
            } 
            var_23 += ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_15 [i_2]))))));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)20)) << (((((/* implicit */int) (short)-10334)) + (10360)))))) || (max((arr_11 [i_2] [i_2] [i_9]), (arr_11 [i_2] [i_9] [i_9])))));
            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_25 [i_2] [i_2] [i_9] [i_9]), (arr_25 [i_9] [i_2] [i_2] [i_2])))) ? ((((~(((/* implicit */int) var_8)))) % (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)25898))));
            var_26 *= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)60543))));
        }
        var_27 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)20))))), (((long long int) 13731992811683427229ULL))));
        var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2] [i_2]))))), (min((((((/* implicit */_Bool) -1357926788)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25898))) : (1526648227U))), (min((3743764199U), (var_6)))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(min((arr_20 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])))))))));
    }
    var_30 = ((/* implicit */long long int) var_9);
}
