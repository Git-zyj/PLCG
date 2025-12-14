/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104063
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
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)79)), (1069455995U)))) ? (((/* implicit */int) ((((/* implicit */long long int) min((1069455995U), (1069455995U)))) > (arr_1 [i_0 - 3] [i_1])))) : (((/* implicit */int) ((_Bool) 3225511301U)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1] [i_4]);
                                arr_15 [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_8 [i_3] [i_3 - 2] [i_4] [i_0 - 2]) / (arr_8 [i_1] [i_3 + 1] [i_2] [i_0 - 3])))) >= (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 1069455995U)) : (9118376283450900735LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_12 = ((/* implicit */int) arr_4 [i_0] [(signed char)3] [(signed char)5]);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1344733979394522332ULL)) ? (((/* implicit */int) (unsigned char)65)) : (-1424417169)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(_Bool)1])) | (arr_0 [i_0 - 4])))) : (281406257233920LL)));
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (arr_8 [i_6] [i_5] [1ULL] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17102010094315029293ULL))))) : (-801058490)))) ? (((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_0)) : (arr_10 [i_6] [i_6] [i_5] [i_5] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) > (min((((/* implicit */unsigned long long int) var_9)), (17102010094315029284ULL)))))))));
                    var_15 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (signed char)127))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((long long int) 740549504));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_7])), (3225511319U)))) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)252))))));
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 16; i_8 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3325591327782796335LL)) ? (arr_24 [i_8 - 2]) : (var_4)));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))) << (((-3325591327782796335LL) + (3325591327782796344LL)))));
        arr_26 [i_8] = ((/* implicit */signed char) 9132439034008939162LL);
        arr_27 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (arr_24 [i_8])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3225511281U)) || (((/* implicit */_Bool) var_8))))))));
    }
    /* vectorizable */
    for (long long int i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -8807025894419554936LL)) * (0ULL)));
        var_22 = (~(((/* implicit */int) arr_23 [i_9 + 2])));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            arr_33 [i_9 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
            var_23 = ((/* implicit */unsigned char) ((int) 10203269054633442469ULL));
        }
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)105))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_5))));
                        var_27 = ((((/* implicit */long long int) 1424417169)) != ((-9223372036854775807LL - 1LL)));
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15541853802577136785ULL)) ? (10203269054633442469ULL) : (((/* implicit */unsigned long long int) 4024147485U))));
    }
    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-127))));
}
