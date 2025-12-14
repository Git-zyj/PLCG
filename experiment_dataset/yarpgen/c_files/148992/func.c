/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148992
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
    var_18 = ((/* implicit */_Bool) var_1);
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_1), ((+(2147221504U)))))), (var_5)));
    var_20 = ((/* implicit */int) (+(((min((((/* implicit */unsigned long long int) (unsigned short)1430)), (var_5))) ^ (((/* implicit */unsigned long long int) var_17))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)171)) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_22 += ((/* implicit */unsigned char) max((arr_0 [i_0] [i_1 + 1]), (((/* implicit */unsigned int) min((-735750511), (((/* implicit */int) (_Bool)1)))))));
                    var_23 += ((/* implicit */signed char) arr_3 [i_2] [i_2]);
                    var_24 -= ((/* implicit */unsigned short) max((((4899459380158047719LL) % (4899459380158047707LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46539)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)53)))))));
                    arr_7 [i_2 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (-1809249065455278200LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)29219)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_25 *= ((/* implicit */short) ((4899459380158047728LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) >= (arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (4899459380158047708LL))) : ((+(-4899459380158047726LL))))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)177))));
        var_28 -= ((unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)8]))) : (arr_0 [i_0] [i_0])));
    }
    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (_Bool)1))));
        var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)8])) ? (((/* implicit */int) arr_6 [(unsigned short)6])) : (((/* implicit */int) var_12))))) ? (((int) arr_6 [(unsigned char)0])) : ((+(((/* implicit */int) arr_6 [(_Bool)1]))))));
    }
}
