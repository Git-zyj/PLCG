/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137880
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
    var_19 = ((/* implicit */unsigned char) ((long long int) (unsigned char)103));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((signed char) (unsigned char)123)))))));
        var_20 = min(((~(((/* implicit */int) (short)-14976)))), ((~((~(((/* implicit */int) (short)-29683)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (-(406699504040872905LL)));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((-1023073434), (((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)24)))))) : (4294967273U)))))));
                    arr_9 [i_0 - 1] [i_2 - 2] = ((/* implicit */unsigned char) (-(var_11)));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((3217990789U), (((/* implicit */unsigned int) (short)9380))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) >= (3170793794U)));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_27 [i_7] [i_6] [i_5] [i_4] [i_7] |= ((/* implicit */signed char) (-(9809480286523690818ULL)));
                                var_23 = ((/* implicit */signed char) arr_22 [i_3] [i_3] [i_4 - 2] [i_4 - 2]);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_26 [i_3] [i_7] [i_5] [i_3] [i_7] [i_3]))));
                                arr_28 [i_7] [i_4] [i_5] [i_7] [i_7] [i_6] [i_3] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (-4))) < (((/* implicit */int) var_17))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_32 [i_3] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_8]))));
                                var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)115))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 25LL))));
                                arr_35 [i_3] [i_3] [i_3] [i_3] [i_8] [i_3] [i_9 + 1] = ((/* implicit */int) ((arr_18 [i_3]) | (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_36 [16LL] |= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_3] [i_3])) : ((-2147483647 - 1))));
        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 3; i_12 < 22; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_12])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 1193895566))))))));
                        var_31 = ((/* implicit */unsigned char) var_0);
                        var_32 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)251))));
                        var_33 = (unsigned char)150;
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5)) ? (-8467332225574137467LL) : (-3479391615983536806LL))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(13570619803672871039ULL)))) ? (((/* implicit */int) arr_29 [i_11 - 2] [i_11] [i_3] [i_3] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_39 [i_3] [i_3]))));
                        arr_49 [i_13] [i_10] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11 - 1] [i_11 + 3])) ? (var_2) : (((/* implicit */unsigned long long int) ((int) (unsigned char)123)))));
                    }
                    arr_50 [i_3] [i_3] = ((/* implicit */short) (unsigned short)37689);
                    arr_51 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) : (4154155947U)));
                }
            } 
        } 
    }
}
