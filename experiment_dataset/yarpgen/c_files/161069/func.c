/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161069
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(var_15))))));
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = 4294967284U;
        arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (((((/* implicit */_Bool) var_9)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))), ((+(1025351406680882095ULL)))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) ((unsigned short) (unsigned short)0));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (unsigned char)111)), (2847890503U)))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((short) (unsigned char)55))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (8883268429428716758ULL)))))));
        arr_11 [i_1] [i_1] = 10117583051215134940ULL;
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (((long long int) (signed char)-83))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    {
                        arr_25 [i_2] = 11035667755891397769ULL;
                        var_20 = ((/* implicit */unsigned long long int) var_1);
                        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))))), (max((((/* implicit */unsigned long long int) var_10)), (var_8)))));
                    }
                } 
            } 
        } 
    }
}
