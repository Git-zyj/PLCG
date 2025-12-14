/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149060
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
    var_18 = (-9223372036854775807LL - 1LL);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)120)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164)))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) * (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)44)) + (((/* implicit */int) (unsigned char)107))))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6634300685486085896LL)) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) var_10)))))))) ^ (-6634300685486085903LL)));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ? (max((((/* implicit */int) var_9)), (var_2))) : (((/* implicit */int) ((((/* implicit */int) (signed char)84)) == (((/* implicit */int) (signed char)55)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)117)) ^ (1530732444)))))) : (((((/* implicit */_Bool) 1692471391U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (10819261684457942899ULL)))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-45))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_11)) ? (1793691718249523439LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))))));
                    arr_10 [i_2 + 2] [12ULL] = ((/* implicit */unsigned short) var_1);
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10))))) & (((/* implicit */long long int) -1374739035))));
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned char) (signed char)-44);
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned char) ((signed char) (((-(((/* implicit */int) (signed char)70)))) % (((/* implicit */int) var_10)))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -9223372036854775804LL)) & (var_8)));
        var_26 = ((/* implicit */signed char) var_17);
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2329304755U)) + (var_8)));
    }
    var_28 &= ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)33127)) >> (((((/* implicit */int) var_14)) + (28934)))));
}
