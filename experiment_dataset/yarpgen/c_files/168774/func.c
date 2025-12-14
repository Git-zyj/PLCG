/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168774
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
    var_20 = ((/* implicit */unsigned int) (-(((long long int) 4424247406519311947LL))));
    var_21 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) ((short) var_10))) != (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_22 = ((/* implicit */short) max((var_6), (((((2479987838U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)58599)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_23 &= ((/* implicit */signed char) var_13);
                        var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
                        arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_3] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6ULL)))))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6921))))))));
                    }
                } 
            } 
        } 
        arr_20 [(unsigned char)9] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)96))))));
    }
}
