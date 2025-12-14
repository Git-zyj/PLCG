/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129415
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_0)))))))));
    var_11 = ((/* implicit */unsigned char) (unsigned short)7529);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)35283)) : (((/* implicit */int) arr_2 [i_0]))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_8)) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (signed char)-81))))), (((((/* implicit */_Bool) 14676263193444901664ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (17536265467399548901ULL)))))));
        var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 7246094984184369662ULL)) ? (7832321334364931415ULL) : (13066240492206559976ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (((+(((/* implicit */int) (unsigned short)7535)))) != (((/* implicit */int) arr_2 [i_0]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_8 [i_1] = (short)-23315;
        arr_9 [i_1] = ((/* implicit */unsigned char) 8709181468298659066LL);
        var_15 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) <= (13325303953578076237ULL))));
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)7534)) ? (11200649089525181954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57982))))))))));
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)167)), (-4616013399881254718LL)))) ? (((/* implicit */int) max((arr_13 [i_2]), (((/* implicit */unsigned short) arr_10 [i_2]))))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */unsigned char) arr_11 [i_2]);
        arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4708922442585137685LL)) ? (((/* implicit */int) (unsigned short)17231)) : (((/* implicit */int) (unsigned char)82))));
    }
}
