/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101843
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) (short)6350)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))), (((var_3) ? (((unsigned long long int) (_Bool)1)) : (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [0ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1014852599)) ? (((((/* implicit */int) arr_3 [i_0])) | ((((_Bool)1) ? (((/* implicit */int) (unsigned short)1315)) : (((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
        var_12 = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_13 *= min((max((((((/* implicit */_Bool) (short)29476)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_7))), (arr_1 [i_0]))), (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [10U]))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_13 [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [i_3] [i_3])))) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3])) : (((/* implicit */int) ((((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-32765))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21960)) ? (var_5) : (-4655609135795269763LL)))))))));
                    arr_14 [i_1] [i_2] [i_3] [(short)6] = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) max(((short)-12608), (((/* implicit */short) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_1] [i_3]) : (((/* implicit */int) (unsigned short)61120)))))))), ((short)-32765)));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32176)) & (((/* implicit */int) (signed char)120)))))));
        arr_15 [i_1 - 1] [(short)10] = ((/* implicit */unsigned short) 4294967295U);
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) 4132179839838772456LL))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [18]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4]))) : (-1LL)))));
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4] [(unsigned short)3])) + (((/* implicit */int) arr_17 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -9223372036854775798LL)))) : ((-(8070450532247928832LL)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
    }
}
