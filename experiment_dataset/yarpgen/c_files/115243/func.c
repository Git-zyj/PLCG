/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115243
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)25029))) ^ (8126112187823028402LL)));
                    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)46883)), (min((((/* implicit */unsigned long long int) ((unsigned int) 1888643667))), (18446744073709551615ULL)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) 5944271833774511818LL)) + (var_0)))))) ? (((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25029)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)29))))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_4] [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)109))))), ((~(((/* implicit */int) (unsigned char)253)))))))));
                        arr_16 [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)10] [i_4] [i_3] [3U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) : (16105579043106569062ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5632))))) : (((((/* implicit */_Bool) (short)5650)) ? (17995607699539277456ULL) : (14293314624474479834ULL))));
                        var_16 = ((/* implicit */int) arr_15 [i_3]);
                    }
                } 
            } 
        } 
        var_17 |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))));
        var_18 = ((/* implicit */unsigned long long int) ((((unsigned int) 969662332U)) % (((/* implicit */unsigned int) ((268435456) / (((/* implicit */int) (unsigned char)250)))))));
    }
    var_19 = ((/* implicit */signed char) var_9);
}
