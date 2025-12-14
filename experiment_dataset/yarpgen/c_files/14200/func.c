/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14200
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)65535)))), (((_Bool) (unsigned short)22)))))) ^ (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((_Bool) var_18)))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) var_15)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((13835058055282163712ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_3] [i_4 - 3])))))));
                            arr_15 [i_0] [i_1 - 2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1])) : ((~(((/* implicit */int) ((unsigned short) (signed char)127)))))));
                            var_22 -= ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))));
                            var_24 = ((/* implicit */unsigned short) ((max(((~(arr_2 [i_1] [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)1))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [14ULL] [i_3])) || (((/* implicit */_Bool) ((unsigned char) 13835058055282163736ULL)))))))));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_2])), (((((/* implicit */int) (signed char)27)) ^ (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_3] [i_2])))))))));
                    }
                } 
            } 
        } 
        var_25 += ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)0)), ((signed char)115)));
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65535);
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2ULL)) || ((_Bool)1)));
}
