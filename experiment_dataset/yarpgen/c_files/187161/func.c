/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187161
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
    var_17 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_6);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_3)))))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-3466523231850451282LL) >= (((/* implicit */long long int) 228586160))))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_7))), (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */unsigned int) arr_4 [i_0])) : (((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) : (((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)3] [i_0])) ? (16462133149785871869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))) >> (((1984610923923679746ULL) - (1984610923923679724ULL)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) min(((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((var_7) >> (((((/* implicit */int) (unsigned char)255)) - (254)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((unsigned char)32), (((/* implicit */unsigned char) (signed char)-8)))))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) << (((3725498986648842193ULL) - (3725498986648842162ULL)))));
                        var_23 -= ((/* implicit */int) (unsigned short)120);
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) ((4227858432U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)12])))))))) ? (arr_10 [i_5] [i_4] [i_0]) : (((/* implicit */long long int) ((((var_8) > (((/* implicit */int) arr_8 [i_0] [i_3] [i_0])))) ? (var_8) : ((+(((/* implicit */int) (unsigned short)54026)))))))));
                    }
                } 
            } 
        } 
        var_25 = max((((/* implicit */unsigned int) ((int) arr_4 [i_0]))), ((-(((unsigned int) arr_7 [i_0] [i_0] [i_0])))));
    }
}
