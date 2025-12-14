/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157536
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
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned int) (signed char)54));
        var_14 = ((/* implicit */unsigned long long int) var_8);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_15 = (!(((/* implicit */_Bool) var_5)));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(3993246897U)))) == (((((/* implicit */_Bool) (~(-2938165978445677526LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : ((~(-2938165978445677513LL)))))));
        var_17 = ((/* implicit */unsigned short) (+(max((2925008159371935878LL), (((/* implicit */long long int) 316096558))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((~(2938165978445677526LL)))))) ? ((~(((-3LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60538))))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_5)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_10));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8LL))));
        var_18 = ((/* implicit */unsigned char) var_1);
        var_19 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-1))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (3938812616U)));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_21 = ((long long int) (short)9119);
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((max((((/* implicit */long long int) (unsigned short)39757)), (var_2))) ^ (-3LL))), (((/* implicit */long long int) ((short) (~(((/* implicit */int) (_Bool)1))))))));
                    var_22 &= (((-((+(((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-74))))));
                    var_23 = ((/* implicit */unsigned long long int) (-(316096576)));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned short) (_Bool)1);
            arr_23 [i_6] = ((/* implicit */signed char) (((~(((/* implicit */int) var_8)))) | (((/* implicit */int) (_Bool)1))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25779))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8LL)) ? (2242594613U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (18446744073709551608ULL)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) ((3LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3LL)))))));
                        var_28 = ((/* implicit */unsigned int) ((signed char) (-2147483647 - 1)));
                        arr_30 [i_3] [(short)18] [i_3] [i_3] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) -316096548)) - (-2938165978445677526LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6LL))))) : ((-(((/* implicit */int) (signed char)-74))))));
                        var_29 = ((/* implicit */unsigned short) (!((_Bool)0)));
                    }
                } 
            } 
            arr_31 [i_6] [14U] [i_6] = ((/* implicit */unsigned char) (-(316096542)));
        }
    }
    var_30 &= ((/* implicit */long long int) ((signed char) var_10));
}
