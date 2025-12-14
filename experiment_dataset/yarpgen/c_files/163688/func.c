/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163688
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
    var_16 = ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [(signed char)3] = ((/* implicit */_Bool) var_15);
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-48);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_14 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                    var_17 ^= var_1;
                    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))))) ? (min((6066240741238297910ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) var_13))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_3))))) : (var_6))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((unsigned long long int) ((((/* implicit */_Bool) 2445882661U)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))));
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) (_Bool)0))))));
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_22 = ((/* implicit */int) (+(max((((/* implicit */long long int) (signed char)92)), (var_14)))));
        var_23 = ((/* implicit */_Bool) var_2);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_24 = (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)5300))))) : (var_1));
        arr_25 [i_7] = ((/* implicit */signed char) -454004109);
    }
    for (unsigned short i_8 = 3; i_8 < 22; i_8 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned char)255))))) ? (var_13) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)60235)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) (short)2121))) : ((-(var_13)))))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-6801902044440567779LL))), (((/* implicit */long long int) var_8))));
            var_27 = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4786371644086349436ULL) : (((/* implicit */unsigned long long int) 1688298988U))))) ? (var_15) : (var_15)))));
            arr_33 [i_8] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) (unsigned char)128)), (var_2))))), (((/* implicit */long long int) max((((((/* implicit */int) (short)25911)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35))))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        arr_42 [i_12] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (signed char)121);
                        var_28 += ((/* implicit */signed char) var_11);
                    }
                } 
            } 
            var_29 |= ((/* implicit */short) min((min((((/* implicit */unsigned int) (unsigned short)22238)), (3037929680U))), (max((2348239914U), (((/* implicit */unsigned int) (_Bool)1))))));
            arr_43 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23632)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_1)))))) : (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned int) var_12)), (var_8))) : (min((((/* implicit */unsigned int) var_12)), (4294967295U)))))));
            arr_44 [i_8] [i_8] = ((/* implicit */int) min((min((((/* implicit */unsigned int) var_5)), (var_6))), (((/* implicit */unsigned int) var_12))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 22; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) min(((~(var_15))), (min((((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (_Bool)0)) : (863540897))), (((int) (unsigned char)70))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (17035954738168346698ULL)));
                        }
                    } 
                } 
            } 
        }
        for (short i_16 = 3; i_16 < 22; i_16 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8452787940490619647LL)) ? (((/* implicit */int) var_9)) : (1879048192)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
            arr_56 [i_8] [(signed char)4] = (~(((/* implicit */int) (signed char)124)));
        }
        var_33 += ((/* implicit */long long int) (+(((/* implicit */int) (short)0))));
    }
}
