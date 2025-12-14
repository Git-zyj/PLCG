/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115073
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned char) min((((short) var_1)), (((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) var_5)))))));
        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) min(((signed char)0), (var_3)))), (((unsigned short) var_9))));
    }
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_12))))), ((unsigned short)25821)))), (max((((/* implicit */unsigned long long int) 4294967289U)), (((var_14) + (2379973207592705189ULL)))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
            {
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((max((var_2), (((/* implicit */unsigned long long int) var_5)))) - ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_10)))))));
                        var_19 = ((/* implicit */unsigned short) ((var_14) | (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) var_2))), (((((/* implicit */int) var_13)) >> (((6059846568149375885ULL) - (6059846568149375866ULL))))))))));
                        var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (4202089019U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((50176839U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_5);
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))), (((unsigned int) var_8))));
                        }
                        var_23 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (-5848091065234550012LL))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1743587319U)) ? (var_2) : (((/* implicit */unsigned long long int) 1743587319U))))) ? (((/* implicit */int) (signed char)-71)) : (((((/* implicit */int) var_0)) | (((/* implicit */int) var_1)))))));
    }
    var_25 = ((/* implicit */unsigned char) ((unsigned long long int) var_5));
}
