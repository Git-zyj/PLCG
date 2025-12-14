/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147418
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
        var_16 = ((/* implicit */short) var_9);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_13);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_15 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) 5981511670476059407LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20007))) : (var_1)))))) : ((~((~(var_2)))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((/* implicit */int) min((arr_10 [1ULL] [(unsigned char)15] [1ULL]), (var_10)))))))));
                    }
                }
            } 
        } 
        var_18 = var_14;
    }
    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)14] [i_5])) ? (arr_6 [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : ((+(var_12)))))) : (var_2)));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_23 [2LL] = ((/* implicit */unsigned char) ((signed char) var_6));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) -5981511670476059387LL))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (signed char)95)) - (87)))))) + (max((15U), (arr_8 [i_5] [i_5] [i_5]))))))))));
        }
        for (unsigned char i_7 = 1; i_7 < 8; i_7 += 3) 
        {
            arr_26 [i_5] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) arr_16 [i_5 + 1])) : (((/* implicit */int) var_6))))));
            arr_27 [i_5 + 1] [i_5 + 1] = ((/* implicit */signed char) ((var_2) - (((/* implicit */long long int) arr_24 [i_5] [i_7]))));
        }
        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 2) 
        {
            var_22 *= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) ((unsigned char) ((2251799811588096ULL) << (((5981511670476059410LL) - (5981511670476059406LL)))))))));
            arr_32 [i_5 + 1] [i_8] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_21 [i_8 - 3] [i_8 - 1]))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 4; i_9 < 9; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        arr_40 [i_5] [i_5] [i_9 - 2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((unsigned long long int) var_9)))) - (min((((/* implicit */int) ((-5981511670476059411LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))), (((((/* implicit */int) (signed char)30)) % (1)))))));
                        arr_41 [i_5] [(signed char)5] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5]))) <= ((+(1239006426U))))))));
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */unsigned short) (short)(-32767 - 1));
    var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((+(((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    var_25 = ((/* implicit */unsigned long long int) 24576LL);
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_11))));
}
