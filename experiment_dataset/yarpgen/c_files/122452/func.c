/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122452
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
    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1048576U) % (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2166791973U)))) : (min((((/* implicit */unsigned int) -434951145)), (2778748515U)))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24231))) ^ (696210103743993865ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)127)), (var_1)))) ^ (((unsigned int) 2128175322U)))))));
    var_19 = ((/* implicit */unsigned long long int) (~(var_14)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((13614239214242377434ULL) - (13614239214242377434ULL))))));
                var_21 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_4 [(unsigned short)5] [i_1] [i_0])));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) var_0);
                            arr_10 [i_0] [(_Bool)1] [i_2] [i_2] [8LL] [i_3] = ((/* implicit */unsigned short) ((int) var_14));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        arr_14 [i_4] [(unsigned char)3] = ((/* implicit */long long int) ((unsigned long long int) var_9));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((unsigned long long int) arr_13 [(signed char)15])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_5] [i_5] [i_5] [16LL] = ((/* implicit */unsigned int) ((_Bool) 6235262148265558797ULL));
                    arr_21 [i_4] [9U] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_16))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) max((var_24), ((-(((696210103743993865ULL) << (((((/* implicit */int) arr_19 [i_4] [(unsigned short)6] [i_4])) - (5011)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_25 |= ((((/* implicit */_Bool) max((-131764166049752619LL), (((/* implicit */long long int) -1281777643))))) || (((/* implicit */_Bool) ((short) max((((/* implicit */long long int) var_10)), (7083562640962568007LL))))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) min(((~(max((((/* implicit */unsigned long long int) arr_15 [(unsigned short)6])), (12211481925443992825ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
        var_27 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13489))) == (2166791973U)));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_28 &= ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) arr_12 [i_8])));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                for (unsigned short i_11 = 2; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((signed char) var_11))), (((unsigned short) arr_13 [i_10 - 1]))));
                        var_30 |= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) arr_18 [i_10 + 1] [i_9] [i_10] [i_11])), (arr_34 [i_10 - 1] [i_11] [i_10] [i_11]))), (((/* implicit */unsigned short) ((unsigned char) arr_31 [i_10 - 1] [i_9] [i_10])))));
                        arr_36 [(unsigned char)9] [i_9] [i_9] [i_8] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 4280120292U))) % (((unsigned long long int) arr_28 [i_8]))));
                    }
                } 
            } 
        } 
    }
}
