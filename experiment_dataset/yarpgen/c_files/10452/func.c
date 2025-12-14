/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10452
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((var_0) >> (((((arr_0 [i_0]) << (((/* implicit */int) (unsigned char)0)))) - (2348200445U))))), (((/* implicit */long long int) -1832524480))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_9 [i_3] [(unsigned char)1] [i_2 - 2] [i_3] = ((/* implicit */unsigned int) var_16);
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min(((unsigned short)11532), ((unsigned short)57031)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_14))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (941214969U)))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [10U] [i_0]))))))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))) ^ (arr_0 [i_0]))))))) > (((/* implicit */int) min(((_Bool)0), ((!(((/* implicit */_Bool) (unsigned short)35794)))))))));
    }
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((unsigned int) (unsigned short)47375)) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
    var_19 = ((/* implicit */unsigned long long int) var_4);
}
