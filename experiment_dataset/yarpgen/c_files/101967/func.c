/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101967
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_10)) : (var_7)))));
            var_14 = ((/* implicit */_Bool) var_8);
        }
        var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_6)), (var_7))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_9)), (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) var_11))))))))));
    }
    for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_17 &= ((/* implicit */unsigned int) var_8);
                        var_18 = ((/* implicit */int) max((((/* implicit */long long int) max((var_4), (((/* implicit */int) var_11))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) var_11)), (var_10)))), (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) var_10)))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((_Bool) min(((unsigned char)211), ((unsigned char)201))))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)-65)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -1449305366)) : (3584385210199890815LL)));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_0)))))))));
        var_23 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)244))))), (max((var_12), (((/* implicit */long long int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)154)))))));
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))), (((/* implicit */int) max(((short)18863), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
    {
        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 2) 
        {
            {
                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)368))));
            }
        } 
    } 
}
