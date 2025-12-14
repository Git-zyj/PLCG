/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17354
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
    var_19 = ((var_2) ^ ((+(min((32736), (((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned int) (unsigned short)65535);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_10) % (((/* implicit */int) (signed char)-47))))))) % (13835058055282163712ULL)));
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)150)))), (((/* implicit */int) (unsigned short)19))))) && (((/* implicit */_Bool) var_6))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) min((max((arr_1 [i_0]), (arr_0 [i_0]))), (min((arr_1 [i_0]), (((/* implicit */int) var_16))))));
        var_23 ^= ((/* implicit */unsigned short) ((-32731) <= (var_2)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_11 [(unsigned short)10] [i_1] [i_4] [i_1] = ((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))) & (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) min((var_16), (var_3))))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1375278270U))))))))));
                        var_25 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65534))));
                        arr_12 [i_4] [i_2] [i_1] = ((/* implicit */signed char) var_14);
                        var_26 ^= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (var_0) : (((/* implicit */long long int) 4135051282U))))) ? (((/* implicit */int) max((arr_4 [i_2]), (((/* implicit */unsigned short) var_14))))) : (min((-32736), (((/* implicit */int) (unsigned char)250))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) - (-32755)))) + ((-(var_6))))) != (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_1), ((signed char)-100)))))))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [12])))) ^ (((/* implicit */int) min((var_13), (((/* implicit */short) var_3))))))))));
        arr_16 [i_5] &= ((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5]);
    }
}
