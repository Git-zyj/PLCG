/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120397
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
    var_19 *= ((/* implicit */unsigned int) ((unsigned char) var_6));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (((int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)6144)))))));
        var_21 = max((((long long int) (short)10)), (((/* implicit */long long int) var_12)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (var_10))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (short)-4794);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)6154)) : (((/* implicit */int) (unsigned short)59391))))))) ? (((((/* implicit */_Bool) 18ULL)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_2 [i_1]), ((unsigned char)108)))))))));
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)99)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_3] [i_4]))) : (max((arr_1 [i_4] [i_1]), (arr_12 [i_4]))))), (max((arr_12 [i_4]), (arr_12 [i_3])))));
                        var_22 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_11)), ((~(arr_1 [i_1] [i_1]))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_4] [i_2])))));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_1] [(short)2] [i_1])), ((unsigned char)126))))))), ((+(var_5)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) arr_21 [i_5]);
        var_24 = ((/* implicit */int) min((var_24), ((+(max((-1), (((/* implicit */int) arr_0 [i_5]))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */int) ((unsigned char) (+((+(((/* implicit */int) var_10)))))));
        var_25 = ((/* implicit */int) 17685758817768368071ULL);
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-25016)) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) (short)25036))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_6] [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_3 [13])) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) (short)-31261)))) : (((/* implicit */int) (unsigned char)101)))), ((((_Bool)0) ? (((/* implicit */int) arr_25 [i_8])) : (arr_19 [i_6] [i_6])))));
                        arr_37 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned char) max((min((var_2), (var_2))), (min((arr_24 [i_7] [i_9]), (arr_24 [i_6] [i_6])))));
                        var_28 = ((/* implicit */_Bool) (((_Bool)1) ? (-638426435221698425LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7])))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_6]))));
            arr_38 [i_6] = ((/* implicit */unsigned long long int) ((((((unsigned int) (_Bool)1)) % (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [(short)0]))))) << (((((/* implicit */int) ((signed char) (+(((/* implicit */int) var_16)))))) - (72)))));
        }
    }
    var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_14)))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_5)))));
    var_31 = ((/* implicit */short) var_10);
}
