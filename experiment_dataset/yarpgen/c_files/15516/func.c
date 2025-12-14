/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15516
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(max((var_13), (((/* implicit */unsigned int) -1058473488)))))))));
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), ((~(4294967295U)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
    var_16 ^= ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551605ULL))) : (((var_3) / (((/* implicit */unsigned long long int) -7619501569213528369LL))))))) ? (min((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 633805235342372951LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_9))), (((unsigned char) -633805235342372952LL))))))));
            var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_1))), (((/* implicit */int) max((var_12), (var_7))))));
            arr_8 [i_1] = ((/* implicit */long long int) var_9);
            var_18 &= ((/* implicit */_Bool) min((((((4779372425080549221ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))) ^ (((((/* implicit */_Bool) var_12)) ? (18446744073709551605ULL) : (17322461846559185071ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_13))))))))));
            var_19 = ((/* implicit */_Bool) ((int) ((short) var_4)));
        }
        for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                var_20 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)126))) / (18446744073709551601ULL));
                var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-32762))));
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17918856401465808559ULL)) ? (-7421522767545067862LL) : (-633805235342372952LL)));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_21 [(short)9] [(unsigned short)15] [i_4] [i_5] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)6184)))) ? (((/* implicit */unsigned long long int) -5760531568359525570LL)) : (var_5)));
                            var_22 -= ((/* implicit */unsigned short) (((+(288230375077969920ULL))) ^ (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */int) var_10)))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((527887672243743070ULL) % (527887672243743072ULL)))) ? (((/* implicit */unsigned long long int) var_1)) : (var_0)));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 633805235342372959LL)) ? (-633805235342372976LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))))) && (((((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_12))))) <= (max((((/* implicit */unsigned int) (unsigned char)169)), (868397785U)))))));
                var_25 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_8)))));
            }
            arr_25 [i_0] [i_2] = ((/* implicit */long long int) ((var_11) ? (((((/* implicit */_Bool) 400890908822833237LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (400890908822833237LL)))) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_13)))) ? ((-(-828864655))) : (((/* implicit */int) (_Bool)1)))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 7236894907574871435LL)), (var_3)))) ? (((((/* implicit */_Bool) var_3)) ? (9521341499280811412ULL) : (((/* implicit */unsigned long long int) var_4)))) : ((+(9521341499280811432ULL)))));
        }
        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)121)), (var_1)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)39))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (short)32761)) > (((/* implicit */int) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        arr_26 [i_0] [i_0] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_10)))));
        var_28 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)3072))))));
    }
    var_29 = ((/* implicit */unsigned int) (+(((int) (-(-633805235342372960LL))))));
}
