/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10249
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
    var_18 = ((/* implicit */unsigned char) var_4);
    var_19 = ((/* implicit */signed char) (~(1603725414608581221LL)));
    var_20 = ((/* implicit */unsigned long long int) (~(905784064555776582LL)));
    var_21 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) (unsigned char)117)), (max((((/* implicit */long long int) (unsigned char)139)), (1603725414608581221LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)139))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) ((long long int) (unsigned short)49367));
                arr_12 [i_3] [(unsigned char)3] [i_3] = ((/* implicit */signed char) (((~(var_5))) << (((((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) (unsigned short)10338)) : (((/* implicit */int) (_Bool)1)))) - (10338)))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-42))))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) ((signed char) var_14)))));
                var_25 -= ((/* implicit */long long int) (_Bool)1);
            }
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1603725414608581217LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2760150472432732029ULL)))) ? (((((/* implicit */_Bool) -8807718204278332521LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)60))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28709)))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (-8807718204278332521LL)));
                        var_28 = (((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                        arr_19 [i_5] [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4075105238U)) ? (-7882848992078404795LL) : (-4221039230193918825LL)));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) (((~(508179547U))) >> (((((((/* implicit */_Bool) -7699929333253316049LL)) ? (7491427816313773282ULL) : (2821406586271374345ULL))) - (7491427816313773270ULL)))));
            arr_22 [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5521570845756081180ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55198)))))) ? (((unsigned int) (unsigned short)7282)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6741418074912858362LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)26062))))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)54321))))));
                            var_32 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (_Bool)0)))));
                            arr_32 [i_1] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (unsigned short)13999);
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned short)65535))));
                        }
                        arr_33 [i_6] [i_6] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)16314);
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) /* same iter space */
        {
            arr_36 [(unsigned short)11] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)36223)) : (((/* implicit */int) (_Bool)0))));
            var_34 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-4)) ? (1265449314U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55169))))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 14087085427198969393ULL))) ? (((/* implicit */int) ((unsigned char) 14087085427198969393ULL))) : (((/* implicit */int) (unsigned char)241))));
        }
        arr_37 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-96)))));
    }
}
